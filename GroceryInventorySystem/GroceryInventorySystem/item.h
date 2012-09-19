/* ***************************************************************************

Programmer: Elizabeth Nenno

Filename: item.h

Requirements:	o	Create fields for items

				o	Get input from user

						ï	Verify strings are valid ñ an allowable number of characters

						ï	If not valid, ask user to re-enter

						ï	Verify numbers are valid ñ an allowable number of characters

						ï	If not, ask user to re-enter

				o	Enter input into file



Includes: fields for items, setting the sizes of items and verification of size/characters

Course: Programming III

Date: 9/18/2012

Assignment: Final Project

Description:  A Whole Lot Of Shit! LOL (Just for you Todd...)

************************************************************************* */

#pragma once
class item
{
public:
	item(int = 0, string = "", string = "", string = "", string = "", string = "", string = "", string = "", string = ""); //default constructor
	~item(void);
	
	//accessor for item number

	void setItNum(int);

	int getItNum();



	//accessor for item name

	void setItName(string);

	string getItName();



	//accessor for wholesale price

	void setWhlslPrice(string);

	string getWhlslPrice();



	//accessor for Num on Hand

	void setNumHand(string);

	string getNumHand();



	//accessor for Max Num 

	void setMaxNum(string);

	string getMaxNum();	



	//accessor for vendor name

	void setVendorName(string);

	string getVendorName();



	//accessor for reOrder Num name

	void setReOrderNum(string);

	string getReOrderNum();



	//accessor for retail price

	void setRetPrice(string);

	string getRetPrice();



	//accessor for dept

	void setDeptName(string);

	string getDeptName();





private:

	int itNum;

	string itName[14];

	string WhlslPrice;

	string numHand;

	string maxNum;

	string vendorName[16];

	string reOrderNum;

	string retPrice;

	string deptName[12];

	

};//end class - InvData
};

