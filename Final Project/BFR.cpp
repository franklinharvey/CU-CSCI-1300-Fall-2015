#include "BFR.h"
#include <iostream>
#include <string>
#include <fstream>
#include <sstream>
using namespace std;

BFR::BFR(int orgCount) {
	numberOfVendors = 0;
}

BFR::~BFR() {
	//dtor
}

int BFR::openFile() {
	ifstream inFile;
    inFile.open("orgDataFixed.csv");
    if(inFile.good()){
        //cout<<"file opened"<<endl;
        //process the file
        string csvOrgData;
        //getline(inFile, csvOrgData);
        //cout<<csvOrgData<<endl;
        int orgCount = 0;
        //getline(inFile, csvOrgData);
        //cout<<csvOrgData<<endl;
        int row = 0;
        while(getline(inFile, csvOrgData)){
            //cout<<csvOrgData<<endl;
            //stringstream
            if(row != 0){
            stringstream ss(csvOrgData); //create a stringstream called ss from csvOrgData
            string temp;
            int counter = 0;
            int id = 0;
            while(getline(ss, temp, ',')){
                //print the first column of data
                if(counter == 0){
                    id = atoi(temp.c_str());
                    if(vendorLocation(id) == -1){
                    	vendors[numberOfVendors].id = id;
                    	vendors[numberOfVendors].totalDonations = 0;
                    	numberOfVendors++;

                    }
                }
                else if(counter == 1){ //second column
                    int location = vendorLocation(id);
                    vendors[location].name = temp;
                    //cout<<vendors[location].id<<endl;
					//cout<<vendors[location].name<<endl;

                }
                //count how often "donor" appears
                else if(counter == 4){
                    if(temp == "donor"){
                        orgCount++;
                    }
                }
                counter++;

            }
        }
        row++;
        }
        //cout<<"There are "<<orgCount<<" organizations that donated."<<endl;
    }else{
        cout<<"error opening file"<<endl;
    }
	return 0;
}



int BFR::vendorLocation(int id){
	for(int i = 0; i < numberOfVendors; i++){
		if(vendors[i].id == id){
			return i;
		}
	}
	return -1;
}

int BFR::vendorLocation(string name){
	for(int i = 0; i < numberOfVendors; i++){
		if(vendors[i].name == name){
			return i;
		}
	}
	return -1;
}

void BFR::vendorDetailsByID(int id){
	if(vendorLocation(id) != -1){
	int location = vendorLocation(id);
	cout<<"Name of Vendor: "<<vendors[location].name;
	cout<<" Id of Vendor: "<<vendors[location].id;
	cout<<" Number of Donations: "<<vendors[location].totalDonations<<endl;
	}
	else{
		cout<< "Vendor not found"<<endl;
	}
}

void BFR::vendorDetailsByName(string name){
	if(vendorLocation(name) != -1){
	int location = vendorLocation(name);
	cout<<"Name of Vendor: "<<vendors[location].name;
	cout<<" Id of Vendor: "<<vendors[location].id;
	cout<<" Number of Donations: "<<vendors[location].totalDonations<<endl;
	}
	else{
		cout<< "Vendor not found"<<endl;
	}

}


int BFR::openFileTwo() {
	ifstream inFile;
    inFile.open("donationDataFixed.csv");
    if(inFile.good()){
        //cout<<"file opened"<<endl;
        //process the file
        string csvDonationData;
        //getline(inFile, csvOrgData);
        //cout<<csvOrgData<<endl;
        int donationCount = 0;
        //getline(inFile, csvOrgData);
        //cout<<csvOrgData<<endl;
        int row = 0;
        while(getline(inFile, csvDonationData)){
            //cout<<csvOrgData<<endl;
            //stringstream
            if(row != 0){
            stringstream ss(csvDonationData); //create a stringstream called ss from csvOrgData
            string temp;
            int counter = 0;
            int id = 0;
            while(getline(ss, temp, ',')){
                //print the first column of data
                if(counter == 0){
                	id = atoi(temp.c_str());
           			int location = vendorLocation(id);
           			vendors[location].totalDonations++;
                    }
    
                counter++;

            }
        }
        row++;
        }
    }else{
        cout<<"error opening file"<<endl;
    }
	return 0;
}

void BFR::showVendorDetails(){
	for(int i = 0; i < numberOfVendors; i++){
		cout<<"Name of Vendor: "<<vendors[i].name;
		cout<<" Id of Vendor: "<<vendors[i].id;
		cout<<" Number of Donations: "<<vendors[i].totalDonations<<endl;
	}
}








