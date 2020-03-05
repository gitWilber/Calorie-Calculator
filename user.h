#ifndef _USER_
#define _USER_
#include <iostream>
using namespace std;
#include <string>



class user {

public:

	user();
	string GetName();
	string GetGender();
	int GetAge();
	double GetWeight();
	double GetHeight();
	string GetActivity();

	void SetName(string);
	void SetGender(int);
	void SetAge(int);
	void SetWeight(double);
	void SetHeight(double);
	void SetActivity(int);

	double bmrCalculation();
	double tdeeCalculation();

private:

	string name;
	int gender;
	int age;
	double weight;
	double height;
	int activity;
	

};

#endif
