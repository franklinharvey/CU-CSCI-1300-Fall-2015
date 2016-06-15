#include "Dog.h"
#include <iostream>

using namespace std;

Dog::Dog(string dogName){
	//ctor
	name = dogName;
}
Dog::~Dog(){
	//dtor
}
void Dog::bark(){
	cout << "My dog's name is: " << name << endl;
}

//getter
string Dog::getName(){
	return name;
}

//setter
void Dog::setName(string newName){
	name = newName;
}