TARGET = libscene.a
OBJS = Camera.o \
Color3f.o \
DirectionalLight.o \
InstanceCounter.o \
Light.o \
Material.o \
Object.o \
PointLight.o \
Ray.o \
Scene.o \
SceneParser.o \
Sphere.o \
Triangle.o \
Vector3f.o \
AbstractBoundingBox.o \
InteriorBoundingBox.o \
RootBoundingBox.o \
LeafBoundingBox.o \
Intersection.o \
Vertex.o \
Texture.o \
Random.o

libscene.a: $(OBJS)
		ar rcs $(TARGET) $(OBJS)

SceneParser.o: SceneParser.cc
		g++ -o SceneParser.o -c SceneParser.cc -I../cv97

clean:
		rm $(OBJS)
		rm $(TARGET)
