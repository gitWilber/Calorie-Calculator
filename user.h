#ifndef _USER_
#define _USER_
#include <iostream>
using namespace std;
#include <string>


//User class
class user {

public:

	user();

	//Getters
	string GetName();
	string GetGender();
	int GetAge();
	double GetWeight();
	double GetHeight();
	string GetActivity();

	//Setters
	void SetName(string);
	void SetGender(int);
	void SetAge(int);
	void SetWeight(double);
	void SetHeight(double);
	void SetActivity(int);

	//Calculation functions
	double bmrCalculation();
	double tdeeCalculation();

private:

	//user variables
	string name;
	int gender;
	int age;
	double weight;
	double height;
	int activity;
	

};

#endif
