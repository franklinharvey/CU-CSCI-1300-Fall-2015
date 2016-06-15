#include <iostream>
#include <string>
#include "AppleFarmer.h"

using namespace std;





int main (){
	AppleFarmer ap1(0);
	while (ap1.endOfMonth() == false) {
		cout << "Enter a harvest amount: " << endl;
		cin >> dayHarvest;
		harvestApples(int dayHarvest);
		
		cout<"”Enter a sales amount: "<<endl;
		cin >> demand;
		sellApples(int sales[], int inventory, int demand, int currentDay);
		updateInventory(int inventory, int change);
		cout << "Apple inventory: " << inventory << endl;
		updateCurrentDay(int currentDay);
	}

	while (currentDay == 30) {
		cout << "Average harvest: "<<calculateAverageHarvest(int harvest[]) << endl;
		cout << "Average sales: "<<calculateAverageSales(int sales[]) << endl;
	}



	return 0;
}