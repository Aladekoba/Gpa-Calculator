//Calculating a students GPA NEW
#include"pch.h"
#include<iostream>
#include<string>
#include<iomanip>
using namespace std;
int main()

{
	string name, major;
	char grade_1, grade_2, grade_3, grade_4, grade_5;
	double gpa1, gpa2, gpa3, gpa4, gpa5;
	double credit_1, credit_2, credit_3, credit_4, credit_5;
	double gradepoints, total_credit_hours;
	double gpa;

	cout << "What is your name?\n";
	cin >> name;
	cout << "What is your major?\n";
	cin >> major;



	//INPUTING STUDENTS GRADE
	cout << "Please input your grade from A-F\n";
	cout << "What is your grade for course 1?\n";
	cin >> grade_1;
	cout << "Please input your grade from A-F\n";
	cout << "What is your grade for course 2?\n";
	cin >> grade_2;
	cout << "Please input your grade from A-F\n";
	cout << "What is your grade for course 3?\n";
	cin >> grade_3;
	cout << "Please input your grade from A-F\n";
	cout << "What is your grade for course 4?\n";
	cin >> grade_4;
	cout << "Please input your grade from A-F\n";
	cout << "What is your grade for course 5?\n";
	cin >> grade_5;

	//INPUTING STUDENTS CREDIT HOURS
	cout << "What is your credit hour for course 1?\n";
	cin >> credit_1;
	cout << "What is your credit hour for course 2?\n";
	cin >> credit_2;
	cout << "What is your credit hour for course 3?\n";
	cin >> credit_3;
	cout << "What is your credit hour for course 4?\n";
	cin >> credit_4;
	cout << "What is your credit hour for course 5?\n";
	cin >> credit_5;

	// IF STATEMENT FOR CALCULATION
	if (grade_1 == 'A')
		gpa1 = 4.0;
	else if (grade_1 == 'B')
		gpa1 = 3.0;
	else if (grade_3 == 'C')
		gpa1 = 2.0;
	else if (grade_4 == 'D')
		gpa1 = 1.0;
	else if (grade_5 == 'F')
		gpa1 = 0.0;

	if (grade_2 == 'A')
		gpa2 = 4.0;
	else if (grade_2 == 'B')
		gpa2 = 3.0;
	else if (grade_2 == 'C')
		gpa2 = 2.0;
	else if (grade_2 == 'D')
		gpa2 = 1.0;
	else if (grade_2 == 'F')
		gpa2 = 0.0;

	if (grade_3 == 'A')
		gpa3 = 4.0;
	else if (grade_3 == 'B')
		gpa3 = 3.0;
	else if (grade_3 == 'C')
		gpa3 = 2.0;
	else if (grade_3 == 'D')
		gpa3 = 1.0;
	else if (grade_3 == 'F')
		gpa3 = 0.0;

	if (grade_4 == 'A')
		gpa4 = 4.0;
	else if (grade_4 == 'B')
		gpa4 = 3.0;
	else if (grade_4 == 'C')
		gpa4 = 2.0;
	else if (grade_4 == 'D')
		gpa4 = 1.0;
	else if (grade_4 == 'F')
		gpa4 = 0.0;

	if (grade_5 == 'A')
		gpa5 = 4.0;
	else if (grade_5 == 'B')
		gpa5 = 3.0;
	else if (grade_5 == 'C')
		gpa5 = 2.0;
	else if (grade_5 == 'D')
		gpa5 = 1.0;
	else if (grade_5 == 'F')
		gpa5 = 0.0;

	//CALCULATIONS
	gradepoints = (gpa1 * credit_1) + (gpa2 * credit_2) + (gpa3 * credit_3) + (gpa4 * credit_4) + (gpa5 * credit_5);
	total_credit_hours = credit_1 + credit_2 + credit_3 + credit_4 + credit_5;
	gpa = gradepoints / total_credit_hours;

	cout << "Your name is: " << name << endl;
	cout << "Your major is: " << major << endl;
	cout << "Your grade for course 1 is: " << grade_1 << endl;
	cout << "Your grade for course 2 is: " << grade_2 << endl;
	cout << "Your grade for course 3 is: " << grade_3 << endl;
	cout << "Your grade for course 4 is: " << grade_4 << endl;
	cout << "Your grade for course 5 is: " << grade_5 << endl; 
	cout << "You got a GPA of: " << fixed << showpoint << setprecision(2) << gpa << endl;
	cout << "REMARK: ";

	// OUTPUT RESULT FOR GPA
	if (gpa == 4.0)
		cout << "Perfect GPA! Keep it up.";
	else if (gpa >= 3.5)
		cout << "High GPA!\n";
	else if (gpa >= 3.0)
		cout << "Good GPA, but DON'T drop any lower\n";
	else if (gpa <= 2.9)
		cout << "Bad GPA, you can do better!\n";



	return 0;
}
