/* ***************************************************************************

Programmer: Todd Pickell

Filename: fileHandler.h

Requirements: None

Includes: 
#include "StdAfx.h"

Course: Programming III

Date: 9/14/12

Assignment: Final Project

Description: this is the file handler class that opens, read from, writes to and closes the files.

************************************************************************* */

#pragma once
class fileHandler
{
public:
	fileHandler(std::string);
	~fileHandler(void);

	vector<string> getFile();
	void putFile(vector<std::string> &);

private:
	string theFileName;
};

