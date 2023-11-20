/*
Program Purpose :To display student record
Programmer: Faq'rieyah
Date 14 November 2023
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

void adminLoginPage(string &userName, string &password)
{
	cout<<"=========================================================================================="<<endl;
	cout<<"||\t\t\t\tSTUDENT RECORDS MANAGEMENT\t\t\t\t||"<<endl;
	cout<<"=========================================================================================="<<endl;
	cout<<"||  Username: ";
	getline (cin,userName); //user prompt username with spacing allows
	cout<<"                                                                                        ||"<<endl;
	cout<<"||  Password: ";                                         
	getline (cin,password); //user prompt password with spacing allows
	cout<<"=========================================================================================="<<endl;
	
}

int main ()
{
	string name, password;
	
	adminLoginPage(name, password);
	
	return 0;
}