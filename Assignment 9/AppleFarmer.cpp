#include "AppleFarmer.h"
#include <iostream>
using namespace std;

AppleFarmer::AppleFarmer(int initVal) {
	for(int i = 0; i < 30; i++){
		sales[i] = initVal;
	}
	for(int i = 0; i < 30; i++){
		harvest[i] = initVal;
	}
}

AppleFarmer::~AppleFarmer() {
	//dtor
}

bool AppleFarmer::sellApples(int	sales[], int inventory, int demand,	int currentDay){
	sales[currentDay] = demand;

	if (demand <= inventory){
		sales[currentDay] = demand;
	}
	else {
		sales[currentDay] = 0;
	}

	if (sales[currentDay] == 0){
		return false;
	}
	else {
		return true;
	}

}

void harvestApples(int harvest[], int currentDay, int dayHarvest){
	harvest[currentDay] = dayHarvest;
}

bool endOfMonth(int currentDay){
	if (currentDay == 30){
		cout << "30th Day" << endl;
		return true;
	}
	else {
		return false;
	}
}

int updateCurrentDay(int currentDay){
	currentDay = currentDay + 1;
	return currentDay;
}

int updateInventory(int inventory, int change){
	inventory = inventory + change;
	return inventory;
}

double calculateAverageHarvest(int harvest[]){
	double averageHarvest = 0;
	for (int i = 0; i < 30; i++) {

		averageHarvest = averageHarvest + harvest[i];
	}
	averageHarvest = averageHarvest / 30;
	return averageHarvest;
}

double calculateAverageSales(int sales[]){
	double averageSales = 0;
	for (int i = 0; i < 30; i++) {

		averageSales = averageSales + sales[i];
	}
	averageSales = averageSales / 30;
	return averageSales;
}

void printHarvest(int currentDay, int sales){
	cout<<"Day: "<<currentDay<<"Harvest: "<<sales[currentDay]<<endl;
}