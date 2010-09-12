/******************************************************************
*
*	CyberVRML97 for C++
*
*	Copyright (C) Satoshi Konno 1996-2002
*
*	File:	AnchorNode.h
*
******************************************************************/

#ifndef _CV97_ANCHOR_H_
#define _CV97_ANCHOR_H_

#include "VRMLField.h"
#include "GroupingNode.h"

using namespace std;

class AnchorNode : public GroupingNode {

	SFString *descriptionField;
	MFString *parameterField;
	MFString *urlField;

public:

	AnchorNode();
	~AnchorNode(); 

	////////////////////////////////////////////////
	//	Description
	////////////////////////////////////////////////

	SFString *getDescriptionField();

	void	setDescription(const char *value);
	const char *getDescription();

	////////////////////////////////////////////////
	// Parameter
	////////////////////////////////////////////////

	MFString *getParameterField();

	void	addParameter(const char *value);
	int		getNParameters();
	const char *getParameter(int index);

	////////////////////////////////////////////////
	// Url
	////////////////////////////////////////////////

	MFString *getUrlField();

	void	addUrl(const char *value);
	int		getNUrls();
	const char *getUrl(int index);
	void	setUrl(int index, const char *urlString);

	////////////////////////////////////////////////
	//	List
	////////////////////////////////////////////////

	AnchorNode	*next();
	AnchorNode	*nextTraversal();

	////////////////////////////////////////////////
	//	virtual functions
	////////////////////////////////////////////////

	bool	isChildNodeType(Node *node);
	void	initialize();
	void	uninitialize();
	void	update();
	void	outputContext(ostream &printStream, const char *indentString);

};

#endif

