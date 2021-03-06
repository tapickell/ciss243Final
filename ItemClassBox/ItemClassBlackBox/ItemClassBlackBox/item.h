//
//  item.h
//  ItemClassBlackBox
//
//  Created by Todd Pickell on 9/27/12.
//  Copyright (c) 2012 Todd Pickell. All rights reserved.
//

#ifndef __ItemClassBlackBox__item__
#define __ItemClassBlackBox__item__

#include <iostream>
#include <string>

using namespace std;

class item
{
private:
	string itNum[0];
	string itName[1];
	string WhlslPrice[2];
	string numHand[3];
	string maxNum[4];
	string vendorName[5];
	string reOrderNum[6];
	string retPrice[7];
	string deptName[8];
    
public:
	item(string itNumValue, string itNamValue, string whslPriceValue, string numHandValue, string maxNumValue, string vendorNameValue, string reOrderNumValue, string retPriceValue, string deptNameValue); //default constructor
    
	//accessor for item number
	void setItNum(string);
	string getItNum();
    
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
    
    
    
};//end class - item



#endif /* defined(__ItemClassBlackBox__item__) */
