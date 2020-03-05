//Main menu for user
#include "menu.h"

//Introduce what TDEE is
menu::menu()
{
	cout << "Welcome to my TDEE calculator!" << endl;
	cout << "This calculator will give you an estimate of your Total Daily Energy Expenditure (TDEE)." << endl;
	cout << "Your TDEE is the amount of calories your body naturally burns throughout the day." << endl;
	cout << "Using the scientifically trusted Mifflin-St. Jeor's formula, you can estimate your TDEE." << endl;
	cout << "Once you have your estimation, you can adjust your caloric intake accordingly." << endl;
	cout << "Let's get started!" << endl;

	userName();
}

//Ask for the users name.
void menu::userName()
{
	string name;

	cout << "\nWhat is your name?" << endl;
	getline(cin, name);

	u1.SetName(name);
	userGender();
	
}

//Ask for users gender.
void menu::userGender()
{
	int gender;

	cout << "\nWhat is your gender? (Choose 1 or 2)" << endl;
	cout << "1. Female" << endl;
	cout << "2. Male" << endl;
	cin >> gender;

	u1.SetGender(gender);
	userAge();
}

//Ask for users age.
void menu::userAge()
{
	int age;

	cout << "\nWhat is your age?" << endl;
	cin >> age;


	u1.SetAge(age);
	userWeight();
}

//Ask for users weight.
void menu::userWeight()
{
	double weight;

	cout << "\nWhat is your weight in pounds(lbs)?" << endl;
	cin >> weight;

	u1.SetWeight(weight);
	userHeight();
}

//Ask for users height.
void menu::userHeight()
{
	double height;

	cout << "\nWhat is your height in inches(in)? (1ft. = 12in.)" << endl;
	cin >> height;

	u1.SetHeight(height);
	userActivity();
}

//Ask for users activtiy level.
void menu::userActivity()
{
	int activity;

	cout << "\nWhat is your activity level throughout the week? (Choose 1-5)" << endl;
	cout << "1. Sedentary (No exercise)" << endl;
	cout << "2. Lightly Active (Exercise 1-2 days)" << endl;
	cout << "3. Fairly Active (Exercise 3-4 days)" << endl;
	cout << "4. Very Active (Exercise 5-6 days)" << endl;
	cout << "5. Extremely Active (Exercise everyday)" << endl;
	cin >> activity;

	u1.SetActivity(activity);
	printStats();
}

//Print the users stats.
void menu::printStats()
{
	cout << "___________________________________________________________" << endl;
	cout << "\nHere are your stats!" << endl;
	cout << "Your name is: " << u1.GetName() << endl;
	cout << "Your gender is: " << u1.GetGender() << endl;
	cout << "Your age is: " << u1.GetAge() << endl;
	cout << "Your weight in pounds is: " << u1.GetWeight() << endl;
	cout << "Your height in inches is: " << u1.GetHeight() << endl;
	cout << "Your activity level is: " << u1.GetActivity() << endl;

	printTDEE();
}

//Print the users TDEE.
void menu::printTDEE()
{

	cout << "\nBased on your stats, your TDEE is: " << u1.tdeeCalculation() << endl;
	cout << "This means on your average day, your body burns " << u1.tdeeCalculation() << " calories to stay alive." << endl;

	cout << "\nWhat does this mean for you?" << endl;
	cout << "\nIf your goal is to lose weight, it is recommended to eat 500 calories less than your TDEE." << endl;
	cout << "If this is your goal, you should be eating " << u1.tdeeCalculation() - 500.0 << " calories daily." << endl;
	cout << "\nIf your goal is to gain weight, it is recommended to eat 500 calories more than your TDEE." << endl;
	cout << "If this is your goal, you should be eating " << u1.tdeeCalculation() + 500.0 << " calories daily." << endl;
	
	cout << "\nThank you for trying my TDEE calculator and good luck with your journey!" << endl;
}



