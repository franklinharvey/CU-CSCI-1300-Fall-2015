//Franklin Harvey
//TA = Amber
//Assignment 7



#include <iostream>
#include <string>
#include <sstream>

using namespace std;

int main () {

	float passComp;
	float passAtem;
	float totYard;
	float touchDown;
	float intCept;

	cout<< "Enter pass completions " <<endl;
	cin >> passComp;
	cout<< "Enter pass attempts " <<endl;
	cin >> passAtem;
	cout<< "Enter total yards "<<endl;
	cin >> totYard;
	cout<< "Enter touchdowns "<<endl;
	cin >> touchDown;
	cout<< "Enter interceptions "<<endl;
	cin >> intCept;

	float compPerAtem = passComp / passAtem;
	float yardsPerAtem = totYard / passAtem;
	float tdPerAtem = touchDown / passAtem;
	float interceptPerAtem = intCept / passAtem;

	float floatC = (compPerAtem - .30) * 5;
	float floatY = (yardsPerAtem - 3) * .25;
	float floatT = (tdPerAtem * 20);
	float floatI = 2.375 - (interceptPerAtem *	25);

	if (floatC < 0) {
		floatC = 0;
	}
	else if (floatC > 2.375) {
		floatC = 2.375;
	}
	
	if (floatY < 0) {
		floatY = 0;
	}
	else if (floatY > 2.375) {
		floatY = 2.375;
	}
	
	if (floatT < 0) {
		floatT = 0;
	}
	else if (floatT > 2.375) {
		floatT = 2.375;
	}
	
	if (floatI < 0) {
		floatI = 0;
	}
	else if (floatI > 2.375) {
		floatI = 2.375;
	}

	float passRate = (floatC + floatY + floatT + floatI) / 6 * 100;

	if (passRate <= 85)
	{
		cout << "Rating " << passRate << ", this is poor" << endl;
	}
	
	if (passRate > 85) {
		if (passRate > 90) {
			if (passRate > 95) {
				cout << "Rating " << passRate << ", this is great" << endl;
				}
			if (passRate <= 95) {
				cout << "Rating " << passRate << ", this is good" << endl;
		}
		}
		if (passRate <= 90){
			cout << "Rating " << passRate << ", this is mediocre" << endl;
		}
	}





// CYCLING /////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////



	float pAir;
	float pRoll;
	float pSec;
	float floatK = 0.18;
	float cfDraft;
	float floatCR = 0.001;
	float mass;
	float bikeMass;
	float velocity;
	float gravity = 9.8;
	int distance;

	cout<< "Mass? " <<endl;
	cin >> mass;
	cout<< "Bike Mass? " <<endl;
	cin >> bikeMass;
	cout<< "Velocity? "<<endl;
	cin >> velocity;
	cout<< "Draft? "<<endl;
	cin >> cfDraft;

	pAir = floatK * cfDraft * (velocity * velocity * velocity);
	pRoll = floatCR * gravity * (mass + bikeMass) * velocity;
	pSec = pRoll + pAir;

	int intPower = pSec;

	cout << intPower << "W" << endl;

	cout<< "Distance? "<<endl;
	cin >> distance;

	float timeTravel = (distance * 1000) / velocity;
	int energyTotal = pSec * timeTravel;

	cout << energyTotal << endl;


// LOOPS /////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////


	int array[4];

	cout << "First? " << endl;
	cin >> int array[0];
	cout << "Second? " << endl;
	cin >> int array[1];
	cout << "Third? " << endl;
	cin >> int array[2];
	cout << "Fourth? " << endl;
	cin >> int array[3];
	cout << "Fifth? " << endl;
	cin >> int array[4];
	
	int array[0] = array[0] + array[1];
	int array[1] = array[1] + array[2];
	int array[2] = array[2] + array[3];
	int array[3] = array[3] + array[4];

	for (int i=0; i <= array; i++){
		cout << array[i] << endl;
	}

	if (array[0] >= array[1]){
		if (array[1] >= array[2]){
			if (array[2] >= array[3]){
				if (array[3] >= array[4]){
					cout << "True" << endl;
				}
			}
		}
	}
	else {
		cout << "False" << endl;
	}



	return 0;
}