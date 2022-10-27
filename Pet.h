//Regina Richardson (ik6089)
#pragma once

#include <vector>
#include <string>

using namespace std; 

class Pet {
public:
	Pet(); 
	~Pet() {};
	void walk(); 
	void fetch(); 
	void eat(); 
	void washingStation();
	void printStats();
	void printActions();
	void checkGrowthStatus();
	void addAction(string x);
	vector<string> actions;
	int top; 

	//Setters
	void setName(string n);
	void setHappiness(int h); 
	void setEnergy(int e); 
	void setCleanliness(int c); 
	void setGrowthPhase(int g);
	void setLifeStatus(bool l);

	//Getters
	string getName() {return name;}
	int getHappiness() {return happiness;}
	int getEnergy() {return energy;}
	int getCleanliness() {return cleanliness;}
	int getGrowthPhase() {return growthPhase;}
	bool getLifeStatus() { return alive; }
private: 
	int happiness;
	int energy; 
	int cleanliness; 
	int growthPhase;
	bool alive;
	string name;
};

Pet::Pet() {
	actions = {};
	top = -1; 
	happiness = 3; 
	energy = 3; 
	cleanliness = 3; 
	growthPhase = 1;
	alive = true;
}

void Pet::addAction(string x) {
	actions.push_back(x);
}

void Pet::setName(string n) {
	name = n; 
}

void Pet::setHappiness(int h) {
	happiness = h; 
}

void Pet::setEnergy(int e) {
	energy = e;
}

void Pet::setCleanliness(int c) {
	cleanliness = c; 
}

void Pet::setGrowthPhase(int g) {
	growthPhase = g;
}

void Pet::setLifeStatus(bool l) {
	alive = l;
}



void Pet::walk() {
	int cleanlinessStatus = getCleanliness();
	int happinessStatus = getHappiness();
	int energyStatus = getEnergy();
	srand(time(0));
	int accident = rand() % (4 - 1 + 1); // accident has a range from 0 - 4
	if (growthPhase == 1 && accident != 2) {
		// decrease cleanliness by 1 point, energy by 1 point, increase happiness by 1 point
		cout << "Going for walk";
		addAction("Going for walk");
		cleanlinessStatus = cleanlinessStatus - 1;
		energyStatus = energyStatus - 1;
		happinessStatus = happinessStatus + 1; 
		setCleanliness(cleanlinessStatus); 
		setEnergy(energyStatus); 
		setHappiness(happinessStatus);
		printStats();
	}

	if (growthPhase == 1 && accident == 2) {
		//decrease cleanliness by 2 points, energy by 2 points, decrease happiness by 2 points
		cout << "The dog got lose!" << endl; 
		addAction("The dog got lose!");
		cleanlinessStatus = cleanlinessStatus - 2;
		energyStatus = energyStatus - 2;
		happinessStatus = happinessStatus -2;
		setCleanliness(cleanlinessStatus);
		setEnergy(energyStatus);
		setHappiness(happinessStatus);
		printStats(); 
	}

	// YOUNGLING STAGE

	if (growthPhase == 2 && accident != 2) {
		// decrease cleanliness by 2 point, energy by 2 point, increase happiness by 2 point
		cout << "Going for walk" << endl;
		addAction("Going for walk");
		cleanlinessStatus = cleanlinessStatus - 2;
		energyStatus = energyStatus - 2;
		happinessStatus = happinessStatus + 2;
		setCleanliness(cleanlinessStatus);
		setEnergy(energyStatus);
		setHappiness(happinessStatus);
		printStats();
	}

	if (growthPhase == 2 && accident == 2) {
		//decrease cleanliness by 3 points, energy by 3 points, decrease happiness by 3 points
		cout << "The dog got lose!" << endl;
		addAction("The dog got lose!");
		cleanlinessStatus = cleanlinessStatus - 3;
		energyStatus = energyStatus - 3;
		happinessStatus = happinessStatus - 3;
		setCleanliness(cleanlinessStatus);
		setEnergy(energyStatus);
		setHappiness(happinessStatus);
		printStats();
	}

	checkGrowthStatus(); 
	
}

void Pet::fetch() {
	int cleanlinessStatus = getCleanliness();
	int happinessStatus = getHappiness();
	int energyStatus = getEnergy();
	srand(time(0));
	int accident = rand() % (4 - 1 + 1); // accident has a range from 0 - 4
	cout << accident;
	if (growthPhase == 1 && accident != 3) {
		// decrease cleanliness by 2 points, energy by 2 points, increase happiness by 2 points
		cout << "Playing a game of fetch" << endl;
		addAction("Playing a game of fetch");
		cleanlinessStatus -= 2;
		energyStatus -= 2;
		happinessStatus += 2;
		setCleanliness(cleanlinessStatus);
		setEnergy(energyStatus);
		setHappiness(happinessStatus);
		printStats();
	}

	if (growthPhase == 1 && accident == 3) {
		//decrease cleanliness by 3 points, energy by 3 points, decrease happiness by 3 points
		cout << "The dog will not drop the ball!" << endl;
		addAction("The dog will not drop the ball!");
		cleanlinessStatus -= 3;
		energyStatus -= 3;
		happinessStatus -= 3;
		setCleanliness(cleanlinessStatus);
		setEnergy(energyStatus);
		setHappiness(happinessStatus);
		printStats();
	}

	//YOUNGLING STAGE
	if (growthPhase == 2 && accident != 3) {
		// decrease cleanliness by 3 points, energy by 3 points, increase happiness by 3 points
		cout << "Playing a game of fetch" << endl;
		addAction("Playing a game of fetch");
		cleanlinessStatus -= 3;
		energyStatus -= 3;
		happinessStatus += 3;
		setCleanliness(cleanlinessStatus);
		setEnergy(energyStatus);
		setHappiness(happinessStatus);
		printStats();
	}

	if (growthPhase == 2 && accident == 3) {
		//decrease cleanliness by 4 points, energy by 4 points, decrease happiness by 4 points
		cout << "The dog will not drop the ball!" << endl;
		addAction("The dog will not drop the ball!");
		cleanlinessStatus -= 4;
		energyStatus -= 4;
		happinessStatus -= 4;
		setCleanliness(cleanlinessStatus);
		setEnergy(energyStatus);
		setHappiness(happinessStatus);
		printStats();
	}

	checkGrowthStatus();
}

void Pet::eat() {
	int cleanlinessStatus = getCleanliness();
	int happinessStatus = getHappiness();
	int energyStatus = getEnergy();
	srand(time(0));
	int accident = rand() % (4 - 1 + 1); // accident has a range from 0 - 4
	if (growthPhase == 1 && accident != 4) {
		// decrease cleanliness by 1 point, energy by 1 point, increase happiness by 1 point
		cout << "Eating Kibble" << endl;
		addAction("Eating Kibble");
		cleanlinessStatus --;
		energyStatus --;
		happinessStatus ++;
		setCleanliness(cleanlinessStatus);
		setEnergy(energyStatus);
		setHappiness(happinessStatus);
		printStats();
	}

	if (growthPhase == 1 && accident == 4) {
		// decrease cleanliness by 2 point, energy by 3 point,  happiness by 1 point
		cout << getName() << " ran away!" << endl;
		addAction(getName() + " ran away!");
		cleanlinessStatus -= 2;
		energyStatus -= 3;
		happinessStatus -= 1;
		setCleanliness(cleanlinessStatus);
		setEnergy(energyStatus);
		setHappiness(happinessStatus);
		printStats();
	}

	//YOUNGLING STAGE 
	if (growthPhase == 2 && accident != 4) {
		// decrease cleanliness by 2 point, energy by 2 point, increase happiness by 2 point
		cout << "Eating Kibble" << endl;
		addAction("Eating Kibble");
		cleanlinessStatus = cleanlinessStatus - 2;
		energyStatus = energyStatus - 2;
		happinessStatus = happinessStatus + 2;
		setCleanliness(cleanlinessStatus);
		setEnergy(energyStatus);
		setHappiness(happinessStatus);
		printStats();
	}

	if (growthPhase == 2 && accident == 4) {
		// decrease cleanliness by 3 point, energy by 3 point,  happiness by 2 point
		cout << getName() << " ran away!" << endl;
		addAction(getName() + " ran away!");
		cleanlinessStatus -= 3;
		energyStatus -= 3;
		happinessStatus -= 2;
		setCleanliness(cleanlinessStatus);
		setEnergy(energyStatus);
		setHappiness(happinessStatus);
		printStats();
	}

	checkGrowthStatus();
}

void Pet::washingStation() {
	int cleanlinessStatus = getCleanliness();
	int happinessStatus = getHappiness();
	int energyStatus = getEnergy();
	srand(time(0));
	int accident = rand() % (4 - 1 + 1); // accident has a range from 0 - 4
	if (growthPhase == 1 && accident != 1) {
		// Increase cleanliness by 1 points, Decrease energy by 1 point, happiness 1 point
		cout << "Washing " << getName() << endl;
		addAction("Washing " + getName());
		cleanlinessStatus ++;
		energyStatus --;
		happinessStatus --;
		setCleanliness(cleanlinessStatus);
		setEnergy(energyStatus);
		setHappiness(happinessStatus);
		printStats();
	}

	if (growthPhase == 1 && accident == 1) {
		// Decrease cleanliness by 2 points, Decrease energy by 2 point, happiness 3 point
		cout << getName() << " ran away!" << endl;
		addAction(getName() + " ran away!");
		cleanlinessStatus -= 2;
		energyStatus -= 2;
		happinessStatus -= 3;
		setCleanliness(cleanlinessStatus);
		setEnergy(energyStatus);
		setHappiness(happinessStatus);
		printStats();
	}

	//YOUNGLING
	if (growthPhase == 2 && accident != 1) {
		// Increase cleanliness by 2 points, Decrease energy by 2 point, happiness 2 point
		cout << "Washing " << getName() << endl;
		addAction("Washing " + getName());
		cleanlinessStatus = cleanlinessStatus + 2;
		energyStatus = energyStatus - 2;
		happinessStatus = happinessStatus -2;
		setCleanliness(cleanlinessStatus);
		setEnergy(energyStatus);
		setHappiness(happinessStatus);
		printStats();
	}

	if (growthPhase == 2 && accident == 1) {
		// Decrease cleanliness by 1 points, Decrease energy by 3 point, happiness 2 point
		cout << getName() << " ran away!" << endl;
		addAction(getName() + " ran away!");
		cleanlinessStatus -= 1;
		energyStatus -= 3;
		happinessStatus -= 2;
		setCleanliness(cleanlinessStatus);
		setEnergy(energyStatus);
		setHappiness(happinessStatus);
		printStats();
	}

	checkGrowthStatus();
}

void Pet::printStats() {


	cout << "\nCURRENT STATS FOR: " << getName() << endl; 
	cout << "Growth Phase: "; 
	if (getGrowthPhase() == 1) {
		cout << "Egg";
	}
	else if (getGrowthPhase() == 2) {
		cout << "Youngling"; 
	}
	else if (getGrowthPhase() == 3) {
		cout << "Teen";
	}
	else {
		cout << "Adulthood"; 
	}
	cout << "\nHappiness: " << happiness << endl;
	cout << "Energy: " << energy << endl; 
	cout << "Cleanliness: " << cleanliness<< endl; 

}

void Pet::printActions() {
	cout << endl << getName() << "'s lifecycle:" << endl;
	for (string action : actions) {
		cout << action << endl;
	}
}

void Pet::checkGrowthStatus() {

	if (getCleanliness() <=  0 || getEnergy() <= 0 || getHappiness() <= 0) {
		cout << "Your animal has died! " << endl;
		setLifeStatus(false);
	}
	if (growthPhase == 1 && (getCleanliness() > 4 || getEnergy() > 4 || getHappiness() > 4) && getLifeStatus() == true) {
		cout << "CONGRATULATIONS!!!!" << endl;
		cout << "Your animal has leveled up from the Egg stage to the Youngling stage ";
		setGrowthPhase(2); 
	}

	if (growthPhase == 2 && (getCleanliness() > 8 || getEnergy() > 8 || getHappiness() > 8) && getLifeStatus() == true) {
		cout << "CONGRATULATIONS!!!!" << endl;
		cout << "Your animal has leveled up from the Youngling stage to the Teen stage ";
		setGrowthPhase(3);
	}

	if (growthPhase == 3 && (getCleanliness() > 12 || getEnergy() > 12 || getHappiness() > 12) && getLifeStatus() == true) {
		cout << "CONGRATULATIONS!!!!" << endl;
		cout << "Your animal has leveled up from the Teen stage to the Adult stage ";
		setGrowthPhase(4);
	}


}