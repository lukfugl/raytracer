#include "SceneParser.h"
#include "SceneGraph.h"
#include "Node.h"
#include "Scene.h"
#include "Camera.h"
#include "Light.h"
#include "DirectionalLight.h"
#include "PointLight.h"
#include "Object.h"
#include "Sphere.h"
#include "Triangle.h"
#include "Vertex.h"
#include "Material.h"
#include "Vector3f.h"
#include "Color3f.h"
#include "InteriorBoundingBox.h"
#include "AbstractBoundingBox.h"
#include "LeafBoundingBox.h"
#include "Texture.h"
#include <string>
#include <iostream>

using namespace std;

SceneParser::SceneParser() { _scene = NULL; }
SceneParser::~SceneParser() { }

bool SceneParser::parseScene(string filename, Scene *scene)
{
	return parseScene(filename.c_str(), scene);
}

bool SceneParser::parseScene(char *filename, Scene *scene)
{
	if (!scene) return false;
	_scene = scene;

	// open file into a SceneGraph object
	SceneGraph *sceneGraph = new SceneGraph();
	sceneGraph->load(filename);

	// traverse VRML tree
	Node *node = sceneGraph->getNodes();
	while (node)
	{
		string nodeType = node->getType();

		if      (nodeType == "Viewpoint")        parseCamera(sceneGraph, node);
		else if (nodeType == "Background")       parseBackground(sceneGraph, node);
		else if (nodeType == "PointLight")       parsePointLight(sceneGraph, node);
		else if (nodeType == "DirectionalLight") parseDirectionalLight(sceneGraph, node);
		else if (nodeType == "SpotLight")        parseSpotLight(sceneGraph, node);
		else if (nodeType == "Shape")            parseObject(sceneGraph, node);

		node = node->nextTraversal();
	}

	_scene = NULL;
	return true;
}

void SceneParser::parseCamera(SceneGraph *sceneGraph, Node *node)
{
	float buffer[4];

	// get camera position
	Vector3f position(0, 0, 10);
	if (node->getExposedValue("position", fieldTypeSFVec3f, buffer))
		position = Vector3f(buffer[0], buffer[1], buffer[2]);

	// get camera orientation
	Vector3f U(0, 0, 1);
	Vector3f V(0, 1, 0);
	if (node->getExposedValue("orientation", fieldTypeSFRotation, buffer))
	{
		double x = buffer[0];
		double y = buffer[1];
		double z = buffer[2];

		double s = sin(buffer[3]);
		double c = cos(buffer[3]);
		double k = 1.0 - c;

		U = Vector3f(k*x*z + s*y, k*y*z - s*x, k*z*z +   c);
		V = Vector3f(k*x*y - s*z, k*y*y +   c, k*z*y + s*x);
	}
	Vector3f target = position - U;
	Vector3f up = V;

	// get field of view
	double fov = 0.4;
	if (node->getExposedValue("fieldOfView", fieldTypeSFFloat, buffer))
		fov = buffer[0];

	// get image size
	int width = 256, height = 256;
	if (node->getExposedValue("imageSize", fieldTypeSFVec2f, buffer))
	{
		width = int(buffer[0]);
		height = int(buffer[1]);
	}
	
	// get maximum ray tree depth
	int depth = 0;
	if (node->getExposedValue("maxRayDepth", fieldTypeSFFloat, buffer))
		depth = int(buffer[0]);
	
	// build the camera
	Camera camera;
	camera.position(position);
	camera.target(target);
	camera.up(up);
	camera.fieldOfView(fov);
	camera.imageWidth(width);
	camera.imageHeight(height);
	_scene->maxDepth(depth);
	_scene->camera(camera);
}

void SceneParser::parseBackground(SceneGraph *sceneGraph, Node *node)
{
	// values to populate with defaults
	Color3f background(0, 0, 0);

	// read in the values from the node
	float buffer[3];
	if (node->getExposedValue("skyColor", fieldTypeSFColor, buffer))
		background = Color3f(buffer[0], buffer[1], buffer[2]);

	// return background
	_scene->background(background);
}

void SceneParser::parsePointLight(SceneGraph *sceneGraph, Node *node)
{
	float buffer[3];

	// Get the color
	Color3f color(1, 1, 1);
	if (node->getExposedValue("color", fieldTypeSFColor, buffer))
		color = Color3f(buffer[0], buffer[1], buffer[2]);

	// Get the ambient intensity
	if (_scene && node->getExposedValue("ambientIntensity", fieldTypeSFFloat, buffer))
		_scene->ambience(color * buffer[0]);

	// Get the light intensity
	if (node->getExposedValue("intensity", fieldTypeSFFloat, buffer))
		color *= buffer[0];

	// Get the light location
	Vector3f location(0, 0, 0);
	if (node->getExposedValue("location", fieldTypeSFVec3f, buffer))
		location = Vector3f(buffer[0], buffer[1], buffer[2]);

	// Get the light attenuation
	Vector3f attenuation(1, 0, 0);
	if (node->getExposedValue("attenuation", fieldTypeSFVec3f, buffer))
		attenuation = Vector3f(buffer[0], buffer[1], buffer[2]);

	// Get the light intensity
	double radius = 100;
	if (node->getExposedValue("radius", fieldTypeSFFloat, buffer))
		radius = buffer[0];

	// Get the jitter
	float jitterRadius = 0.0;
	if (node->getExposedValue("jitterRadius", fieldTypeSFFloat, buffer))
		jitterRadius = buffer[0];

	// create the light and return
	PointLight *light = new PointLight;
	light->color(color);
	light->location(location);
	light->attenuation(attenuation);
	light->radius(radius);
	light->jitterValue(jitterRadius);
	_scene->add_light(light);
}

void SceneParser::parseDirectionalLight(SceneGraph *sceneGraph, Node *node)
{
	float buffer[3];

	// Get the color
	Color3f color(1, 1, 1);
	if (node->getExposedValue("color", fieldTypeSFColor, buffer))
		color = Color3f(buffer[0], buffer[1], buffer[2]);

	// Get the ambient intensity
	if (_scene && node->getExposedValue("ambientIntensity", fieldTypeSFFloat, buffer))
		_scene->ambience(color * buffer[0]);

	// Get the light intensity
	if (node->getExposedValue("intensity", fieldTypeSFFloat, buffer))
		color *= buffer[0];

	// Get the light direction
	Vector3f direction(0, 0, 1);
	if (node->getExposedValue("direction", fieldTypeSFVec3f, buffer))
		direction = Vector3f(-buffer[0], -buffer[1], -buffer[2]);

	// Get the jitter
	float jitter = 0.0;
	if (node->getExposedValue("jitter", fieldTypeSFFloat, buffer))
		jitter = buffer[0];

	// create the light and return
	DirectionalLight *light = new DirectionalLight;
	light->color(color);
	light->direction(direction);
	light->jitterValue(jitter);
	_scene->add_light(light);
}

void SceneParser::parseSpotLight(SceneGraph *sceneGraph, Node *node)
{
	float buffer[3];

	// Get the color
	Color3f color(1, 1, 1);
	if (node->getExposedValue("color", fieldTypeSFColor, buffer))
		color = Color3f(buffer[0], buffer[1], buffer[2]);

	// Get the ambient intensity
	if (_scene && node->getExposedValue("ambientIntensity", fieldTypeSFFloat, buffer))
		_scene->ambience(color * buffer[0]);

	// Get the light intensity
	if (node->getExposedValue("intensity", fieldTypeSFFloat, buffer))
		color *= buffer[0];

	// create the light and return
	DirectionalLight *light = new DirectionalLight;
	light->color(color);
	_scene->add_light(light);
}

void SceneParser::parseObject(SceneGraph *sceneGraph, Node *node)
{
	// parse object based on geometry
	Node *geometryNode = node->getGeometryNode();
	if (geometryNode)
	{
		// get material
		Material material;
		Node *appearanceNode = node->getAppearanceNodes();
		if (appearanceNode) material = parseAppearance(sceneGraph, appearanceNode);

		string nodeType = geometryNode->getType();
		if      (nodeType == "Sphere")         parseSphere(sceneGraph, geometryNode, material);
		else if (nodeType == "IndexedFaceSet") parseIndexedFaceSet(sceneGraph, geometryNode, material);
	}
}

void SceneParser::parseSphere(SceneGraph *sceneGraph, Node *node, const Material &material)
{
	float buffer[3];

	// get radius
	double radius = 1;
	if (node->getExposedValue("radius", fieldTypeSFFloat, buffer))
		radius = buffer[0];

	// get transform matrix and calculate center of sphere
	float matrix[4][4];
	node->getTransformMatrix(matrix);
	Vector3f center(matrix[3][0] / matrix[3][3], matrix[3][1] / matrix[3][3], matrix[3][2] / matrix[3][3]);

	// create the sphere and return
	Sphere *sphere = new Sphere;
	sphere->radius(radius);
	sphere->center(center);
	sphere->material(material);
	_scene->add_box(new LeafBoundingBox(sphere));
}

void SceneParser::parseIndexedFaceSet(SceneGraph *sceneGraph, Node *node, const Material &material)
{
	int i, j;

	// read fields from node
	vector< Color3f* > color;
  	parseColors(sceneGraph, node->getChildNode("Color"), color);

	vector< Vector3f* > coord;
	parseVectors(sceneGraph, node->getChildNode("Coordinate"), coord);

	vector< Vector3f* > normal;
   	parseVectors(sceneGraph, node->getChildNode("Normal"), normal);

	vector< double > s, t;
   	parseTextureCoords(sceneGraph, node->getChildNode("TextureCoordinate"), s, t);

	bool ccw = true;
	node->getExposedValue("ccw", fieldTypeSFBool, &ccw);

	vector< int > coordIndex;
	parseIndex(sceneGraph, (MFInt32*)node->getField("coordIndex"), coordIndex);

	// check validity
	if (coord.empty() || coordIndex.empty()) return;
	if (coordIndex[coordIndex.size() - 1] != -1)
		coordIndex.push_back(-1);

	// get transformation matrix
	float matrix[4][4];
	node->getTransformMatrix(matrix);
	double x, y, z, w;

	// apply transformation matrix to coordinates
	for (i = 0; i < coord.size(); i++)
	{
		x = coord[i]->x();
		y = coord[i]->y();
		z = coord[i]->z();

		coord[i]->x(matrix[0][0] * x + matrix[1][0] * y + matrix[2][0] * z + matrix[3][0]);
		coord[i]->y(matrix[0][1] * x + matrix[1][1] * y + matrix[2][1] * z + matrix[3][1]);
		coord[i]->z(matrix[0][2] * x + matrix[1][2] * y + matrix[2][2] * z + matrix[3][2]);

		(*coord[i]) *= 1.0 / (matrix[0][3] * x + matrix[1][3] * y + matrix[2][3] * z + matrix[3][3]);
	}

	// apply transformation matrix to normals
	Vector3f translation;
	if (matrix[3][3] != 0)
		translation = Vector3f(matrix[3][0] / matrix[3][3], matrix[3][1] / matrix[3][3], matrix[3][2] / matrix[3][3]);

	for (i = 0; i < normal.size(); i++)
	{
		x = normal[i]->x();
		y = normal[i]->y();
		z = normal[i]->z();

		normal[i]->x(matrix[0][0] * x + matrix[1][0] * y + matrix[2][0] * z + matrix[3][0]);
		normal[i]->y(matrix[0][1] * x + matrix[1][1] * y + matrix[2][1] * z + matrix[3][1]);
		normal[i]->z(matrix[0][2] * x + matrix[1][2] * y + matrix[2][2] * z + matrix[3][2]);

		(*normal[i]) *= 1.0 / (matrix[0][3] * x + matrix[1][3] * y + matrix[2][3] * z + matrix[3][3]);
		(*normal[i]) -= translation;
	}

	// read off polygons
	vector< Vertex > vertices;
	int face = 0;

	AbstractBoundingBox *box = new InteriorBoundingBox(NULL, NULL);

	for (i = 0; i < coordIndex.size(); i++)
	{
		if (coordIndex[i] == -1)
		{
			for (j = 2; j < vertices.size(); j++)
			{
				// create new triangle
				Triangle *triangle = new Triangle;
				triangle->material(material);

				// add vertices
				triangle->vertex(0, vertices[0]);
				triangle->vertex(1, vertices[j - 1]);
				triangle->vertex(2, vertices[j]);

				// initialize and add to scene
				triangle->initialize(ccw);
				box->add_child(new LeafBoundingBox(triangle));
			}

			// clean up
			vertices.clear();
		}
		else
		{
			// add vertex to polygon
			Vertex vertex;
			vertex.position(*coord[coordIndex[i]]);
			if (!normal.empty()) vertex.normal(*normal[coordIndex[i]]);
			if (!s.empty()) vertex.s(s[coordIndex[i]]);
			if (!t.empty()) vertex.t(t[coordIndex[i]]);
			if (!color.empty()) vertex.color(*color[coordIndex[i]]);
			vertices.push_back(vertex);
		}
	}

	_scene->add_box(box);

	// clean up temporary heap memory usage
	for (i = 0; i < color.size(); i++) delete color[i];
	for (i = 0; i < coord.size(); i++) delete coord[i];
	for (i = 0; i < normal.size(); i++) delete normal[i];
}

void SceneParser::parseVectors(SceneGraph *sceneGraph, Node *node, vector< Vector3f* > &points)
{
	if (node == NULL) return;
	MField *field = (MField*) node->getExposedField(0);
	if (field == NULL) return;

	float buffer[3];
	for (int i = 0; i < field->getSize(); i++)
	{
		((MFVec3f*) field)->get1Value(i, buffer);
		points.push_back(new Vector3f(buffer[0], buffer[1], buffer[2]));
	}
}

void SceneParser::parseTextureCoords(SceneGraph *sceneGraph, Node *node, vector< double > &s, vector< double > &t)
{
	if (node == NULL) return;
	MField *field = (MField*) node->getExposedField(0);
	if (field == NULL) return;

	float buffer[2];
	for (int i = 0; i < field->getSize(); i++)
	{
		((MFVec2f*) field)->get1Value(i, buffer);
		s.push_back(buffer[0]);
		t.push_back(buffer[1]);
	}
}

void SceneParser::parseColors(SceneGraph *sceneGraph, Node *node, vector< Color3f* > &colors)
{
	if (node == NULL) return;
	MField *field = (MField*) node->getExposedField(0);
	if (field == NULL) return;

	float buffer[3];
	for (int i = 0; i < field->getSize(); i++)
	{
		((MFColor*) field)->get1Value(i, buffer);
		colors.push_back(new Color3f(buffer[0], buffer[1], buffer[2]));
	}
}

void SceneParser::parseIndex(SceneGraph *sceneGraph, MFInt32 *field, vector< int > &index)
{
	for (int i = 0; i < field->getSize(); i++)
		index.push_back(field->get1Value(i));
}

Material SceneParser::parseAppearance(SceneGraph *sceneGraph, Node *node)
{
	Material material;
	Node *materialNode = node->getChildNode("Material");
	if (materialNode)
		material = parseMaterial(sceneGraph, materialNode);

	Texture *texture = NULL;
	Node *imageTextureNode = node->getChildNode("ImageTexture");
	if (imageTextureNode)
	{
		texture = new Texture(parseTexture(sceneGraph, imageTextureNode));
		texture->initialize();
		_scene->add_texture(texture);
	}
	material.texture(texture);

	return material;
}

Material SceneParser::parseMaterial(SceneGraph *sceneGraph, Node *node)
{
	float buffer[3];

	// diffuse color
	Color3f diffuseColor(0, 0, 0);
	if (node->getExposedValue("diffuseColor", fieldTypeSFColor, buffer))
		diffuseColor = Color3f(buffer[0], buffer[1], buffer[2]);

	// ambient color
	Color3f ambientColor(0, 0, 0);
	if (node->getExposedValue("ambientColor", fieldTypeSFColor, buffer))
		ambientColor = Color3f(buffer[0], buffer[1], buffer[2]);
	else if (node->getExposedValue("ambientIntensity", fieldTypeSFFloat, buffer))
	{
		double r, g, b;
		r = diffuseColor.r();
		g = diffuseColor.g();
		b = diffuseColor.b();
		ambientColor = Color3f(r * buffer[0], g * buffer[0], b * buffer[0]);
	}

	// specular color
	Color3f specularColor(0, 0, 0);
	if (node->getExposedValue("specularColor", fieldTypeSFColor, buffer))
		specularColor = Color3f(buffer[0], buffer[1], buffer[2]);

	// transmissive color
	Color3f transmissiveColor(0, 0, 0);
	if (node->getExposedValue("transmissiveColor", fieldTypeSFColor, buffer))
		transmissiveColor = Color3f(buffer[0], buffer[1], buffer[2]);
	else if (node->getExposedValue("transparency", fieldTypeSFFloat, buffer))
		transmissiveColor = Color3f(buffer[0], buffer[0], buffer[0]);

	// reflective color
	Color3f reflectiveColor(0, 0, 0);
	if (node->getExposedValue("reflectiveColor", fieldTypeSFColor, buffer))
		reflectiveColor = Color3f(buffer[0], buffer[1], buffer[2]);

	// emissive color
	Color3f emissiveColor(0, 0, 0);
	if (node->getExposedValue("emissiveColor", fieldTypeSFColor, buffer))
		emissiveColor = Color3f(buffer[0], buffer[1], buffer[2]);

	// phong constant
	int phongConstant = 20;
	if (node->getExposedValue("shininess", fieldTypeSFFloat, buffer))
		phongConstant = int(buffer[0] * 128);

	// index of refraction
	double indexOfRefraction = 1.0;
	if (node->getExposedValue("indexOfRefraction", fieldTypeSFFloat, buffer))
		indexOfRefraction = buffer[0];

	// glossiness
	double glossiness = 0.0;
	if (node->getExposedValue("glossiness", fieldTypeSFFloat, buffer))
		glossiness = buffer[0];

	// translucency
	double translucency = 0.0;
	if (node->getExposedValue("translucency", fieldTypeSFFloat, buffer))
		translucency = buffer[0];

	// build material and return
	Material material;
	material.diffuseColor(diffuseColor);
	material.emissiveColor(emissiveColor);
	material.specularColor(specularColor);
	material.ambientColor(ambientColor);
	material.transmissiveColor(transmissiveColor);
	material.reflectiveColor(reflectiveColor);
	material.phongConstant(phongConstant);
	material.indexOfRefraction(indexOfRefraction);
	material.glossiness(glossiness);
	material.translucency(translucency);
	return material;
}

Texture SceneParser::parseTexture(SceneGraph *sceneGraph, Node *node)
{

	// image filename
	char filename[30] = "";
	node->getExposedValue("url", fieldTypeSFString, filename);

	// repeat in S?
	bool repeatS = true;
	node->getExposedValue("repeatS", fieldTypeSFBool, &repeatS);

	// repeat in T?
	bool repeatT = true;
	node->getExposedValue("repeatT", fieldTypeSFBool, &repeatT);

	// build texture (without loading image) and return
	Texture texture;
	texture.filename(filename);
	texture.repeatS(repeatS);
	texture.repeatT(repeatT);
	return texture;
}
