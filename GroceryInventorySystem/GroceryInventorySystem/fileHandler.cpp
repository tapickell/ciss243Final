/* ***************************************************************************

Programmer: Todd Pickell

Filename: fileHandler.cpp

Requirements: None

Includes: 
#include "StdAfx.h"
#include "fileHandler.h"

Course: Programming III

Date: 9/14/12

Assignment: Final Project

Description: this is the file handler class that opens, read from, writes to and closes the files.

************************************************************************* */

#include "StdAfx.h" //extra includes go in this file
#include "fileHandler.h"

using namespace std;

fileHandler::fileHandler(string name)
{
	theFileName = name;
}


fileHandler::~fileHandler(void)
{
}


vector<string> fileHandler::getFile()
{
	ifstream inFile;
	string fileLine;
	vector<string> document;

	inFile.open(theFileName);
	if (inFile.is_open())
	{
		cout << "Getting file..." << endl;
		cout << endl;
		while(!inFile.eof())
		{
			getline(inFile, fileLine);
			document.push_back(fileLine);
		}
	} else {
		//TODO
		//may be nice to ask if user wants to exit and check file for corruption
		//or to just create new file.
		ofstream newFile;
		newFile.open(theFileName);
		newFile.close();
		cout << "Creating new file..." << endl;
		cout << endl;
		inFile.open(theFileName);
	}
	inFile.close();
	return document;
}

void fileHandler::putFile(vector<string> &fileStrings)
{
	ofstream outFile;
	outFile.open(theFileName);
	for (int i = 0; i < fileStrings.size()-1; i++)
	{
		outFile << fileStrings[i] << "\n";
	}
	//to prevent from adding extra \n every time program runs
	outFile << fileStrings[fileStrings.size()-1];
	outFile.close();
}