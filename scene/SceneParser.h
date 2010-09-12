#ifndef __SCENEPARSER_H
#define __SCENEPARSER_H

#include "InstanceCounter.h"
#include "Camera.h"
#include "Material.h"
#include "Texture.h"
#include "Vector3f.h"
#include "Color3f.h"
#include <string>
#include <vector>

using namespace std;

class SceneGraph;
class Node;
class MFInt32;
class Scene;
class Light;
class Object;

class SceneParser : public InstanceCounter
{
  private:
	Scene *_scene;

  public:
	SceneParser();
	~SceneParser();

	bool parseScene(string filename, Scene *scene);
	bool parseScene(char *filename, Scene *scene);

	void parseCamera(SceneGraph *sceneGraph, Node *node);
	void parseBackground(SceneGraph *sceneGraph, Node *node);

	void parsePointLight(SceneGraph *sceneGraph, Node *node);
	void parseDirectionalLight(SceneGraph *sceneGraph, Node *node);
	void parseSpotLight(SceneGraph *sceneGraph, Node *node);

	void parseObject(SceneGraph *sceneGraph, Node *node);
	void parseSphere(SceneGraph *sceneGraph, Node *node, const Material &material);
	void parseIndexedFaceSet(SceneGraph *sceneGraph, Node *node, const Material &material);
	void parseVectors(SceneGraph *sceneGraph, Node *node, vector< Vector3f* > &vectors);
	void parseTextureCoords(SceneGraph *sceneGraph, Node *node, vector< double > &s, vector< double > &t);
	void parseColors(SceneGraph *sceneGraph, Node *node, vector< Color3f* > &colors);
	void parseIndex(SceneGraph *sceneGraph, MFInt32 *field, vector< int > &index);

	Material parseAppearance(SceneGraph *sceneGraph, Node *node);
	Material parseMaterial(SceneGraph *sceneGraph, Node *node);
	Texture parseTexture(SceneGraph *sceneGraph, Node *node);
};

#endif // __SCENEPARSER_H
