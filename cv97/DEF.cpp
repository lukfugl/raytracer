/******************************************************************
*
*	CyberVRML97 for C++
*
*	Copyright (C) Satoshi Konno 1996-2002
*
*	File:	DEF.cpp
*
******************************************************************/

#include "DEF.h"

DEF::DEF(const char *name, const char *string) 
{
	setName(name);
	setString(string);
}

DEF::~DEF() 
{
	remove();
}

////////////////////////////////////////////////
//	Name
////////////////////////////////////////////////

void DEF::setName(const char *name) 
{
	mName.setValue(name);
}

const char *DEF::getName() 
{
	return mName.getValue();
}

////////////////////////////////////////////////
//	String
////////////////////////////////////////////////

void DEF::setString(const char *string) 
{
	mString.setValue(string);
}

const char *DEF::getString() 
{
	return mString.getValue();
}

