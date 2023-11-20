
/*
Program Purpose :To calculate average scores of the students
Programmer: Adriana
Date 16 November 2023
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

int main()
{
	
	cout<<calculateAverageScores();
	
	return 0;
}