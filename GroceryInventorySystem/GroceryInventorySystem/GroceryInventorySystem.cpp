// GroceryInventorySystem.cpp : main project file.

#include "stdafx.h" //extra includes go in this file
#include "fileHandler.h"
#include "item.h"

#define STOREP "store.pkl"
#define INTROP "intro.pkl"
#define MENUP "menu.pkl"
#define HELP "help.pkl"
#define HEADERP "header.pkl"
#define ERRORP "error.pkl"

using namespace System;
using namespace std;

//declarations go here.
void displayItems(vector<string> &stringsToDisplay);
int searchFor(vector<string> &myStack);


int main(array<System::String ^> ^args)
{




    system("PAUSE");
    return 0;
}

	/*Todd ********************V demonstration method V************* */
	//returns an int and takes in no parameters
	//demonstrates adding a method into a group project
	



	/*Todd ********************^ demonstration method ^************* */


	/*McKinley ********************V displayMenu method V************* */
	//returns an int and takes in no parameters
	//displays the main menu and gets users choice as an int and returns it to the calling function
	//this can use the display file method and the menu.pkl file



	/*McKinley ********************^ displayMenu method ^************* */


	/*Jody ********************V  handleMenuChoice method  V************* */
	//returns void and takes in an int
	//calls method according to int passed in


	/*Jody ********************^  handleMenuChoice method  ^************* */


	/*Elizabeth ********************V stringsToItems method V************* */
	//returns a vector<item> and takes in a vector<string>
	//converts params to proper format before calling the constructor passing in the formated params to create items.
	//pushes newly created items onto vector before returning


	/*Elizabeth ********************^ stringsToItems method ^************* */


	/*Elizabeth ********************V itemsToStrings method V************* */
	//returns a vector<string> and takes in a vector<item>
	//calls toString on each item in vector and pushes that onto vector of strings to be returned


	/*Elizabeth ********************^ itemsToStrings method ^************* */


	/*unassigned ********************V add method V************* */
	//returns void and takes in no params
	//creates file handler to data file
	//prompts user for field input
	//writes vector<string> out to file


	/*unassigned ********************^ add method ^************* */


	/*unassigned **************V   editItems method  V *********** */
	//returns void and takes in no params
	//this method will call search to get item number to edit
	//then display item to edit
	//after user edits the new item can be saved into the vector
	//write changes to file


	/*unassigned **************^   editItems method   ^*********** */


	/*Leah **************V   displayItems method   V*********** */ 
	//returns void and takes in no params
	//this is a wrapper method that calls displayFile
	//passing a header fileHandler then calls th method again 
	//passing a store fileHandler



	/*Leah **************^   displayItems method   ^*********** */ 


	/*Leah **************V   displayFile method   V*********** */ 
	//returns void and takes in a vector<string>
	//used to display all files in program
	//can be passed a fileHandler instance calling getFile() method
void displayFile(vector<string> &stringsToDisplay)
{


}


	/*Leah **************^   displayFile method   ^*********** */ 



	/*Nik **************V   removeItems method   V*********** */
	//returns void and takes in no params
	//creates a file handler to the data file
	//calls search method and passes in vector<string> to get location of item in vector
	//displays header file by calling display file
	//displays item to be deleted
	//prompts user are you sure?
	//deletes item if user is sure
	//writes changes to file



	/*Nik **************^   removeItems method   ^*********** */


	/*Todd **************V   search method   V*********** 9/14/12 */
	//returns an int and takes in a vector<string>
	//used to search thru and locate an item by its item number
int searchFor(vector<string> &myStack){
	int foundAt = -1;
	string findMe;
	cout << "Enter item# to search for: " << endl;
	cin >> findMe;
	cout << endl << "Locating item..." << endl;

	for (int i = 0; i < myStack.size(); i++)
	{
		int x = myStack[1].find(findMe);
		if (x > -1)
		{
			foundAt = i;
		}
	}
	if (foundAt == -1)
	{
		cout << endl << "Sorry did not find item number you are looking for" << endl;
	}
	return foundAt;
}//end searchFor
	/*Todd **************^   search method   ^*********** 9/14/12 */