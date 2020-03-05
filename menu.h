#ifndef _MENU_
#define _MENU_

#include <iostream>
using namespace std;
#include "user.h"

class menu {

public:

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
  user u1;
	
};

#endif