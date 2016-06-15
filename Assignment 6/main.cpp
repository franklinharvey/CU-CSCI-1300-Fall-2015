/*#Author: Franklin Harvey
CSCI 1300
Assignment 6
TA: Amber*/

#include <iostream>
#include <string>
#include <sstream>

using namespace std;

int main(){

cout << "Give me a number of seconds in a day i.e. less than 86400 ";

int intS;
int intM;
int intH;
string strOne = "The time is ";
string strTwo = " hours ";
string strThr = " minutes ";
string strFou = " seconds ";

//getline(cin,intS);
cin >> intS;

intH = intS/3600;
intM = (intS % 3600) / 60;
intS = intS % 60;

cout << strOne << intH << strTwo << intM << strThr << intS << strFou << endl;

/*
Problem 2
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
*/

float floatPT = 1.0/200;
int intFI;
cout << "How many folds?" << endl;
cin >> intFI;
int intI = 0;

while (intI < intFI){
	floatPT = floatPT * 2;
	intI += 1;
}

cout << "The thickness of the paper after " << intFI << " folds is " << floatPT << " cm. " << endl;

/*
Problem 3
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
*/

int intCP = 307357870;
int intSN = 31536000;
int intNP;

intNP = (intSN / 7) - (intSN / 13) + (intSN / 35) + intCP;
cout << "The Population will be " << intNP << endl;



return 0;
}