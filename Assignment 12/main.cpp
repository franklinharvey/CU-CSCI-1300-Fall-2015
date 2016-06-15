#include <iostream>
#include "Dog.h"

using namespace std;

int main(){
	Dog DogOne("Scruffy");
	cout << DogOne.getName() << endl;

	DogOne.setName("Roscoe");
	cout << DogOne.getName() << endl;
	return 0;
}