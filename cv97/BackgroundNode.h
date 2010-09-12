/******************************************************************
*
*	CyberVRML97 for C++
*
*	Copyright (C) Satoshi Konno 1996-2002
*
*	File:	BackgroundNode.h
*
******************************************************************/

#ifndef _CV97_BACKGROUND_H_
#define _CV97_BACKGROUND_H_

#include "BindableNode.h"

using namespace std;

class BackgroundNode : public BindableNode {

	MFColor *groundColorField;
	MFColor *skyColorField;
	MFFloat *groundAngleField;
	MFFloat *skyAngleField;
	MFString *frontUrlField;
	MFString *backUrlField;
	MFString *leftUrlField;
	MFString *rightUrlField;
	MFString *topUrlField;
	MFString *bottomUrlField;
	
public:

	BackgroundNode();
	~BackgroundNode();

	////////////////////////////////////////////////
	// groundColor
	////////////////////////////////////////////////

	MFColor *getGroundColorField();

	void addGroundColor(float value[]);
	int getNGroundColors();
	void getGroundColor(int index, float value[]);

	////////////////////////////////////////////////
	// skyColor
	////////////////////////////////////////////////

	MFColor *getSkyColorField();

	void addSkyColor(float value[]);
	int getNSkyColors();
	void getSkyColor(int index, float value[]);

	////////////////////////////////////////////////
	// groundAngle
	////////////////////////////////////////////////

	MFFloat *getGroundAngleField();

	void addGroundAngle(float value);
	int getNGroundAngles();
	float getGroundAngle(int index);

	////////////////////////////////////////////////
	// skyAngle
	////////////////////////////////////////////////

	MFFloat *getSkyAngleField();

	void addSkyAngle(float value);
	int getNSkyAngles();
	float getSkyAngle(int index);

	////////////////////////////////////////////////
	// frontUrl
	////////////////////////////////////////////////

	MFString *getFrontUrlField();

	void addFrontUrl(const char *value);
	int getNFrontUrls();
	const char *getFrontUrl(int index);

	////////////////////////////////////////////////
	// backUrl
	////////////////////////////////////////////////

	MFString *getBackUrlField();

	void addBackUrl(const char *value);
	int getNBackUrls();
	const char *getBackUrl(int index);

	////////////////////////////////////////////////
	// leftUrl
	////////////////////////////////////////////////

	MFString *getLeftUrlField();

	void addLeftUrl(const char *value);
	int getNLeftUrls();
	const char *getLeftUrl(int index);

	////////////////////////////////////////////////
	// rightUrl
	////////////////////////////////////////////////

	MFString *getRightUrlField();

	void addRightUrl(const char *value);
	int getNRightUrls();
	const char *getRightUrl(int index);

	////////////////////////////////////////////////
	// topUrl
	////////////////////////////////////////////////

	MFString *getTopUrlField();

	void addTopUrl(const char *value);
	int getNTopUrls();
	const char *getTopUrl(int index);

	////////////////////////////////////////////////
	// bottomUrl
	////////////////////////////////////////////////

	MFString *getBottomUrlField();

	void addBottomUrl(const char *value);
	int getNBottomUrls();
	const char *getBottomUrl(int index);

	////////////////////////////////////////////////
	//	List
	////////////////////////////////////////////////

	BackgroundNode *next();
	BackgroundNode *nextTraversal();

	////////////////////////////////////////////////
	//	Virtual functions
	////////////////////////////////////////////////
	
	bool isChildNodeType(Node *node);
	void initialize();
	void uninitialize();
	void update();
	void outputContext(ostream &printStream, const char *indentString);
};

#endif


