#ifndef DOG_H
#define DOG_H
#include <iostream>

using namespace std;

class Dog {
	public:
		Dog(string);
		~Dog();
		void bark();
		string getName();
		void setName(string);

	protected:
	private:
		string name;
		string newName;
		
};
#endif // DOG_H