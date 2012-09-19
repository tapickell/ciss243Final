/* ***************************************************************************

Programmer:  Elizabeth Nenno

Filename: item.cpp

Requirements:  o	Create fields for items

				o	Get input from user

						ï	Verify strings are valid ñ an allowable number of characters

						ï	If not valid, ask user to re-enter

						ï	Verify numbers are valid ñ an allowable number of characters

						ï	If not, ask user to re-enter

				o	Enter input into file



Includes:	fields for items, setting the sizes of items and verification of size/characters

Course: Programming III

Date:	9/18/2012

Assignment: Final Project

Description:	 A Whole Lot Of More Shit! LOL (Again, just for you Todd...)

************************************************************************* */

#include "StdAfx.h" //extra includes go in this file
#include "item.h"


item::item(int itNumValue, string itNameValue, string whlslPriceValue, string numHandValue, string maxNumValue, string vendorNameValue, string reOrderNumValue, string retPriceValue, string deptNameValue)
{

  setItNum (itNumValue);

	setItName (itNameValue);

	setWhlslPrice(whlslPrice);

	setNumHand (numHandValue);

	setMaxNum (maxNumValue);

	setVendorName (vendorNameValue);

	setReOrderNum (reOrderNumValue);

	setRetPrice (retPrice);

	setDeptName (deptNameValue);

} //end InvData constructor

//overloaded constructor that takes all params

item::~item(void)
{
}

//get item number value

int InvData::getItNum()

{

  return itNum;

}//end function getItNum



//set item number value

void InvData::setItNum(int itNumValue) 

{

	itNum = itNumValue;

}//end function setitNum



//get Item Name value

string InvData::getItName() 

{

	return itName[14];

}//end function getItName



//set Item Name value

void InvData::setItName(string itNameString) 

{

//copy up to 14 chars for item name

	int length = itNameString.size();

	length = (length < 14 ? length : 13);

	itNameString.copy ("", length);

	itName[length] = '\0'; //append null character to vendor 

}//end function setitName



//get Wholesale Price value

string InvData::getWhlslPrice() 

{

	return whlslPrice;

}//end function getwhlslPrice



//get Number on Wholesale Price Value

void InvData::setWhlslPrice(string whlslPriceValue) 

{

	whlslPrice = whlslPriceValue;

}//end function whlslPrice



//get Number on Hand value

string InvData::getNumHand() 

{

	return numHand;

}//end function getNumHand



//get Number on Hand value

void InvData::setNumHand(string numHandValue) 

{

	numHand = numHandValue;

}//end function setNumHand



//get Max Number value

string InvData::getMaxNum() 

{

	return maxNum;

}//end function getMax



//set Max Number value

void InvData::setMaxNum(string maxNumValue) 

{

	maxNum = maxNumValue;

}//end function setMaxNum



//get Vendor value

string InvData::getVendorName() 

{

	return vendorName[16];

}//end function getVendor



//set Vendor value

void InvData::setVendorName(string vendorNameString) 

{

	//copy vendor name up to size of 16

	int length = vendorNameString.size();

	length = (length < 16 ? length : 15);

	vendorNameString.copy ("", length);

	vendorName[length] = '\0'; //append null character to vendor 

}//end function setVendor



//get reOrder Num value

string reOrderNum::getReOrderNum() 

{

	return reOrderNum;

}//end function reOrderNum



//set reOrder Number value

void InvData::setReOrderNum(string reOrderNumValue) 

{

	reOrderNum = reOrderNumValue;

}//end function setreOrderNum



//get Retail Price value

string InvData::getRetPrice() 

{

	return retPrice;

}//end function getretPrice



//get Number on Retail Price Value

void InvData::setRetPrice(string retPriceValue) 

{

	retPrice = retPriceValue;

}//end function retPrice



//get Dept value

string InvData::getDeptName()  

{

	return deptName[12];

}//end function getDept



//set Dept value

void InvData::setDeptName(string deptNameString)

{

	//copy up to 12 chars for department

	int length = deptNameString.size();

	length = (length < 12 ? length : 11);

	deptNameString.copy ("", length);

	deptName[length] = '\0'; //append null character to vendor 

}//end function setDept


//toString method <-------------STILL NEEDED