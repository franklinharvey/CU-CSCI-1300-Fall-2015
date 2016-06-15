#include <iostream>
#include <string>

using namespace std;

int harvest[30];
int sales[30];


bool sellApples(int	sales[], int inventory, int demand,	int currentDay){
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


int main (){
	



	return 0;
}