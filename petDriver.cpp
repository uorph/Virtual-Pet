//Regina Richardson (ik6089)
#include <iostream>
#include "Pet.h"

using namespace std;
void menu(int&); 

int main() {


	Pet animal;
	string name; 
	int menuChoice; 
	cout << "Welcome to the Game!" << endl; 
	cout << "Enter your pet name: "; 
	cin >> name; 
	animal.setName(name);
	

	while (true) {
		menu(menuChoice);
		switch (menuChoice) {
		case 1:
			animal.walk();
			break;
		case 2:
			animal.fetch();
			break;
		case 3:
			animal.eat();
			break;
		case 4:
			animal.washingStation();
			break;
		case 5:
			cout << "Quitting Game" << endl;
			return 0;
		}

		if (!animal.getLifeStatus()) {
			animal.printActions();
			return 0;
		}
	} 

	return 0; 
}

void menu(int& choice) {
	cout << endl;
	cout << "Choose an activity for your pet";
	cout << "\n1. Walk\n2. Fetch\n3. Eat\n4. Washing Station\n5. Quit\n";
	cout << "Enter choice: ";
	cin >> choice;

	if (cin.fail())
	{
		cout << "Please enter an integer";
		cin.clear();
		cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
	}
}