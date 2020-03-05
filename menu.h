#ifndef _MENU_
#define _MENU_

#include <iostream>
using namespace std;
#include "user.h"

//Menu class
class menu {

public:
	//Functions for menu class.
	menu();
	void userName();
	void userGender();
	void userAge();
	void userWeight();
	void userHeight();
	void userActivity();
	void printStats();
	void printTDEE();

private:

//Object for the user
  user u1;
	
};

#endif