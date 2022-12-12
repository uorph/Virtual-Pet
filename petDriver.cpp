//Regina Richardson (ik6089) and Habiba Karimi (ck9943)
#include <iostream>
#include <stdio.h>
#include "Pet.h"

using namespace std;
void menu(int&); 
void asciiDogImage(); 
void asciiCatImage(); 
void asciiPigImage();
void asciiHedgeHogImage(); 
void imageMenu(); 

int main() {


	Pet animal;
	string name; 
	int menuChoice; 
	
	cout << "Welcome to the Game!" << endl; 
	imageMenu();
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

void asciiDogImage() {
	/* This ascii design is from:https://www.asciiart.eu/animals/dogs */
	cout << "    __ " << endl; 
	printf(" o-''|\\_____/) \n"); 
	printf("  \\_/|_)     ) \n");
	printf("     \\  __  / \n");
	cout << "     (_/ (_/  " << endl; 
}

void asciiCatImage() {
/* This ascii design is from: https://www.asciiart.eu/animals/cats */
	printf("       \\    /\\ \n"); 
	printf("        )  ( ') \n"); 
	printf("       (  /  )\n"); 
	printf("        \\(__)| \n");
}

void asciiPigImage() {
/* This ascii design is from: https://www.asciiart.eu/animals/other-land */
	printf("    _____   \n"); 
	printf("^..^     \\9 \n"); 
	printf("(oo)_____/ \n"); 
	printf("   WW  WW\n"); 
}

void asciiHedgeHogImage() {
	/* This ascii design is from:https://www.asciiart.eu/animals/other-land */
	printf("       ..::::::::. \n"); 
	printf("      :::::::::::::\n"); 
	printf("     /. `:::::::::::\n"); 
	printf("    o__,_::::::::::'\n"); 
}

void imageMenu() {
	int choice; 
	cout << "What kind of pet would you like? " << endl; 
	cout << "\n1. Dog\n2. Cat\n3. Pig\n4. Hedgehog\n";
	cin >> choice; 

	switch (choice) {
	case 1: 
		asciiDogImage(); 
		break; 
	case 2: 
		asciiCatImage(); 
		break; 
	case 3: 
		asciiPigImage(); 
		break; 
	case 4: 
		asciiHedgeHogImage(); 
		break;
	}
}