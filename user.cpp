#include "user.h"

//Constructor for user
user::user()
{
	name = " ";
	gender = 0;
	age = 0;
	weight = 0;
	height = 0;
	activity = 0;
}

//Get name
string user::GetName()
{
	return name;
}

//Get gender
string user::GetGender()
{
	if (gender == 1)
		return "Female";
	else if (gender == 2)
		return "Male";
}

//Get age
int user::GetAge()
{
	return age;
}

//Get weight
double user::GetWeight()
{
	return weight;
}

double user::GetHeight()
{
	return height;
}

string user::GetActivity()
{
	if (activity == 1)
		return "Sedentary (No exercise)";
	else if (activity == 2)
		return "Lightly Active (Exercise 1-2 days)";
	else if (activity == 3)
		return "Fairly Active (Exercise 3-4 days)";
	else if (activity == 4)
		return "Very Active (Exercise 5-6 days)";
	else if (activity == 5)
		return "Extremely Active (Exercise everyday)";
}

void user::SetName(string userName)
{

	name = userName;
}

void user::SetGender(int userGender)
{
	while (userGender <= 0 || userGender >= 3) {
		cout << "Invalid choice. Please try again. " << endl;
		cout << "What is your gender? (Choose 1 or 2)" << endl;
		cout << "1. Female" << endl;
		cout << "2. Male" << endl;
		cin >> userGender;
	}
	gender = userGender;
}

void user::SetAge(int userAge)
{
	while (userAge <= 0 || userAge >= 120) {
		cout << "Invalid age. Please try again." << endl;
		cout << "What is your age" << endl;
		cin >> userAge;

	}
	age = userAge;
}

void user::SetWeight(double userWeight)
{

	while (userWeight <= 0) {
		cout << "Invalid weight. Please try again." << endl;
		cout << "What is your weight in pounds(lbs)?" << endl;
		cin >> userWeight;
	}
	weight = userWeight;
}

void user::SetHeight(double userHeight)
{
	height = userHeight;
}

void user::SetActivity(int userActivity)
{
	while (userActivity <= 0 || userActivity >= 6) {
		cout << "Invalid choice! Please try again." << endl;
		cout << "What is your activity level throughout the week ? (Choose 1 - 5)" << endl;
		cout << "1. Sedentary (No exercise)" << endl;
		cout << "2. Lightly Active (Exercise 1-2 days)" << endl;
		cout << "3. Fairly Active (Exercise 3-4 days)" << endl;
		cout << "4. Very Active (Exercise 5-6 days)" << endl;
		cout << "5. Extremely Active (Exercise everyday)" << endl;
		cin >> userActivity;
	}

	activity = userActivity;
}

//Calculates the bmr of user based on stats
//Returns the bmr as a double
double user::bmrCalculation()
{
	double weightKG = (weight * 0.453592);
	double heightCM = (height * 2.54);
	double bmr = 0.0;

	if (gender == 1)
		bmr = 10 * weightKG + 6.25 * heightCM - 5 * (double)age - 161;
	else if (gender == 2)
		bmr = 10 * weightKG + 6.25 * heightCM - 5 * (double)age + 5;

	return bmr;
}

//Calculates the tdee of user based on bmr
//Returns the tdee as a double
double user::tdeeCalculation()
{
	double tdee = 0.0;

	if (activity == 1)
		tdee = 1.2 * bmrCalculation();
	else if (activity == 2)
		tdee = 1.375 * bmrCalculation();
	else if (activity == 3)
		tdee = 1.55 * bmrCalculation();
	else if (activity == 4)
		tdee = 1.725 * bmrCalculation();
	else if (activity == 5)
		tdee = 1.9 * bmrCalculation();

	return tdee;
}
