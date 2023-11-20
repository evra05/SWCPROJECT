/*
Program Purpose :To display students record
Programmer: Ain
Date 17 November 2023
*/

#include <iostream>
#include <string>
#include <iomanip>
#include <set>
#include <cctype>
#include <algorithm>
#include <limits>

using namespace std;

//Declare Arrays
const int numOfStudents = 50;
int studentID[numOfStudents];
string studentName[numOfStudents];
double scores[numOfStudents];
int attendance[numOfStudents];

//from Yana's Function
double calculateAverageScores()
{
	//declaring variables
	double totalScores = 0.0, averageScores;
	
	//for loop based on totalStudents
	for(int i = 0; i < numOfStudents; ++i )
	{
		totalScores= scores[i]+totalScores; // an equation to sum up all the scores
	}
	
	averageScores= totalScores/numOfStudents; // divide 
	
	return averageScores;
}


void displayStudentRecords()
//Template for displaying the results
{
	cout<<"=========================================================================================="<<endl;
	cout<<"||                                     STUDENT RECORDS                                  ||"<<endl;
	cout<<"=========================================================================================="<<endl;
	cout<<"|| Student ID || Student Name            || Student Scores    || Student Attendance (%) ||"<<endl;
	cout<<"=========================================================================================="<<endl;
		
	for(int i = 0; i < numOfStudents; i++ )
	{
	cout<<"||"<<studentID[i] <<"                  " <<studentName[i] <<"                         " << scores[i] << "               "  << fixed << setprecision(2) << attendance[i] << endl;
	cout<<"||            ||                         ||                   ||                        ||"<<endl;
	cout<<"=========================================================================================="<<endl;
	}
	cout<<"=========================================================================================="<<endl;
	cout<<"|| The average score is: " << calculateAverageScores() <<" \t\t\t\t\t                        ||"<<endl;
	cout<<"=========================================================================================="<<endl;
}

int main()
{
	displayStudentRecords();
	
	return 0;
}