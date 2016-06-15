//Franklin Harvey Final Project


#include <iostream>
#include <string>
#include <fstream>
#include <sstream>
#include "BFR.h"

using namespace std;

int main() {

	BFR bf1(0);
	bf1.openFile();
	bf1.openFileTwo();
	cout << "Hello! My name is Franklin Harvey and this is my final project!" << endl;
	cout << "This program will tell the user how many times a vendor donated." << endl;
	
	while (true){

	cout << "1. Show All Vendors Details" << endl;
	cout << "2. Show Vendor Details By ID" << endl;
	cout << "3. Show Vendor Details By Name" << endl;
	cout << "4. Exit" << endl;
	cout << endl;
	cout << "Please choose an option: ";

	string choice;
	cin >> choice;
	if(choice == "1"){
	bf1.showVendorDetails();

	}
	else if(choice == "2"){
		cout << "Enter Vendor ID: ";
		string vendorID;
		cin >> vendorID;
		cout << endl;
		bf1.vendorDetailsByID(atoi(vendorID.c_str()));
		cout << endl;

	}
	else if(choice == "3"){
		cout << "Enter Vendor Name: ";
		string vendorID;
		cin >> vendorID;
		cout << endl;
		bf1.vendorDetailsByName(vendorID);
		cout << endl;
	}
	else{
		cout << endl;
		cout << "Program Terminate" << endl;
		cout << endl;
		break;
	}
	






	}
	return 0;
}