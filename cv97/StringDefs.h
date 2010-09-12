/******************************************************************
*
*	CyberVRML97 for C++
*
*	Copyright (C) Satoshi Konno 1996-2002
*
*	File:	String.h
*
******************************************************************/

#ifndef _CV97_STRING_H_
#define _CV97_STRING_H_

#ifdef SUPPORT_STL
#include <string>
#endif

class  String 
{

#ifdef SUPPORT_STL
	std::string	mValue;
#else
	char	*mValue;
#endif

public:

	String();
	String(const char value[]);
	String(const char value[], int offset, int count); 

	~String();

	void setValue(const char value[]);
	void setValue(const char value[], int offset, int count); 
	const char *getValue();
	void deleteValue();
	int length();
	char charAt(int  index);
	int compareTo(const char *anotherString);
	int compareToIgnoreCase(const char *anotherString);
	void concat(const char *str);
	void copyValueOf(char data[]);
	void copyValueOf(char  data[], int  offset, int count);
	int regionMatches(int toffset, const char *other, int ooffset, int len);
	int regionMatchesIgnoreCase(int toffset, const char *other, int ooffset, int len);
	int startsWith(const char *prefix);
	int endsWith(const char *suffix);
	void replaceCharacter(char old, char replacedment);
};

#endif
