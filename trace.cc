#include "SceneParser.h"
#include "Scene.h"
#include "InstanceCounter.h"
#include "Random.h"
#include <iostream>
#include <fstream>
#include <GL/glut.h>

#define SUBDIVIDE 3

using namespace std;

void write_to_file(char *filename);
void display();

int width = 0;
int height = 0;
Color3f *pixels = NULL;

int main(int argc, char **argv)
{
	Random::initialize();

	// get GL/X parameters out first
	if (argc == 2) glutInit(&argc, argv);

	// check usage
    if (argc < 2 || argc > 3)
	{
		cerr << "Usage: " << argv[0] << " <inputfile> [outputfile]" << endl;
		return 0;
    }

	// parse file
	cout << "Parsing file '" << argv[1] << "'..." << endl;
	SceneParser parser;
	Scene *scene = new Scene;
	parser.parseScene(argv[1], scene);
	int i, j, k;

	// get basic image information and initialize camera
	cout << "Initializing camera..." << endl;
	Camera camera = scene->camera();
	camera.samplingLevel(SUBDIVIDE);
	camera.initialize();

	width = camera.imageWidth();
	height = camera.imageHeight();
	pixels = new Color3f[width * height];

	// illuminate each pixel
	cout << "Rendering..." << endl;
	for (j = 0; j < height; j++)
	{
		for (i = 0; i < width; i++)
		{
			printf("[ % 3d%% ]\r", int(100 * float(i + j * width) / float(width * height)));
			pixels[i + j * width] = Color3f(0, 0, 0);

			vector< Ray > rays = camera.rays_through_pixel(i, j);
			vector< Ray >::iterator ray;
			for (ray = rays.begin(); ray != rays.end(); ray++)
				pixels[i + j * width] += scene->illuminate(*ray);

			pixels[i + j * width] *= 1.0 / rays.size();
		}
	}
	cout << "Done.      " << endl;

	// done with this, clean up before starting GL main loop
	delete scene;

	//cout << "active instances: " << InstanceCounter::instances << endl;
	//cout << "pixels: " << width * height << endl;
	// write to file if specified
	if (argc == 3)
	{
		write_to_file(argv[2]);
		delete[] pixels;
		return 0;
	}
	else
	{
		// display to screen
		glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
		glutInitWindowSize(width, height);
		glutCreateWindow(argv[1]);
		glutDisplayFunc(display);

		glClearColor(0, 0, 0, 0);
		glMatrixMode(GL_PROJECTION);
		glLoadIdentity();
		gluOrtho2D(0, width, 0, height);

		glutMainLoop();

		// never gets here :(
		delete[] pixels;
		cout << "Done." << endl;
		return 0;
	}
}

void write_to_file(char *filename)
{
	// print PPM header
	cout << "Writing to file..." << endl;

	FILE *fout = fopen(filename, "w");
	fprintf(fout, "P3\n");
	fprintf(fout, "%d %d\n", width, height);
	fprintf(fout, "%d\n\n", 0xFFFF); // each R/G/B value output will be between 0x0000 and 0xFFFF

	for (int k = 0; k < width * height; k++)
	{
		// convert to 0 - FFFF range
		Color3f color = pixels[k];
		unsigned long r = (unsigned long)(color.r() * 0xFFFF);
		unsigned long g = (unsigned long)(color.g() * 0xFFFF);
		unsigned long b = (unsigned long)(color.b() * 0xFFFF);

		// print to file
		fprintf(fout, "%d %d %d\n", r, g, b);
	}
	fclose(fout);
}

void display()
{
	glClear(GL_COLOR_BUFFER_BIT);
	glBegin(GL_POINTS);

	int i, j, k;
	for (j = 0, k = 0; j < height; j++)
	{
		for (i = 0; i < width; i++, k++)
		{
			Color3f color = pixels[k];
			glColor3f(color.r(), color.g(), color.b());
			glVertex2f(i, height - 1 - j);
		}
	}

	glEnd();
	glFlush();
}
