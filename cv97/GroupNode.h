/******************************************************************
*
*	CyberVRML97 for C++
*
*	Copyright (C) Satoshi Konno 1996-2002
*
*	File:	GroupNode.h
*
******************************************************************/

#ifndef _CV97_GROUP_H_
#define _CV97_GROUP_H_

#include "GroupingNode.h"

using namespace std;

class GroupNode : public GroupingNode {

public:

	GroupNode();
	~GroupNode();

	////////////////////////////////////////////////
	//	Output
	////////////////////////////////////////////////

	void outputContext(ostream &printStream, const char *indentString);

	////////////////////////////////////////////////
	//	functions
	////////////////////////////////////////////////
	
	bool isChildNodeType(Node *node);
	void initialize();
	void uninitialize();
	void update();

	////////////////////////////////////////////////
	//	List
	////////////////////////////////////////////////

	GroupNode *next();
	GroupNode *nextTraversal();

};

#endif


