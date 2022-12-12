//Regina Richardson (ik6089) and Habiba Karimi (ck9943)
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

	// EGG PHASE 

	if (growthPhase == 1 && accident != 2) {
		cout << "Going for walk";
		addAction("Going for walk");
		//Cleanliness bar decreases by one, energy bar increases by 1, happiness bar increases by 1
		cleanlinessStatus = cleanlinessStatus - 1;
		energyStatus = energyStatus + 1;
		happinessStatus = happinessStatus + 1; 
		setCleanliness(cleanlinessStatus); 
		setEnergy(energyStatus); 
		setHappiness(happinessStatus);
		printStats();
	}

	if (growthPhase == 1 && accident == 2) {
		cout << getName() << "got lose!" << endl;
		addAction(getName() + " got lose!");
		//Cleanliness bar decreases by one, energy bar decreases by 1, happiness bar decreases by 1
		cleanlinessStatus = cleanlinessStatus - 1;
		energyStatus = energyStatus - 1;
		happinessStatus = happinessStatus - 1;
		setCleanliness(cleanlinessStatus);
		setEnergy(energyStatus);
		setHappiness(happinessStatus);
		printStats(); 
	}

	// YOUNGLING STAGE

	if (growthPhase == 2 && accident != 2) {
		cout << "Going for walk" << endl;
		addAction("Going for walk");
		//Cleanliness bar decreases by one, energy bar increases by 2, happiness bar increases by 2
		cleanlinessStatus = cleanlinessStatus - 1;
		energyStatus = energyStatus + 2;
		happinessStatus = happinessStatus + 2;
		setCleanliness(cleanlinessStatus);
		setEnergy(energyStatus);
		setHappiness(happinessStatus);
		printStats();
	}

	if (growthPhase == 2 && accident == 2) {
		cout << getName() << "got lose!" << endl;
		addAction(getName() + " got lose!");
		//Cleanliness bar decreases by 2, energy bar decreases by 2, happiness bar decreases by 2
		cleanlinessStatus = cleanlinessStatus - 2;
		energyStatus = energyStatus - 2;
		happinessStatus = happinessStatus - 2;
		setCleanliness(cleanlinessStatus);
		setEnergy(energyStatus);
		setHappiness(happinessStatus);
		printStats();
	}

	//  TEEN STAGE

	if (growthPhase == 3 && accident != 2) {
		cout << "Going for walk" << endl;
		addAction("Going for walk");
		//Cleanliness bar decreases by one, energy bar increases by 3, happiness bar increases by 3
		cleanlinessStatus = cleanlinessStatus - 1;
		energyStatus = energyStatus + 3;
		happinessStatus = happinessStatus + 3;
		setCleanliness(cleanlinessStatus);
		setEnergy(energyStatus);
		setHappiness(happinessStatus);
		printStats();
	}

	if (growthPhase == 3 && accident == 2) {
		cout << getName() << "got lose!" << endl;
		addAction(getName() + " got lose!");
		//Cleanliness bar decreases by 3, energy bar decreases by 3, happiness bar decreases by 3
		cleanlinessStatus = cleanlinessStatus - 3;
		energyStatus = energyStatus - 3;
		happinessStatus = happinessStatus - 3;
		setCleanliness(cleanlinessStatus);
		setEnergy(energyStatus);
		setHappiness(happinessStatus);
		printStats();
	}

	// ADULTHOOD STAGE 

	if (growthPhase == 4 && accident != 2) {
		cout << "Going for walk" << endl;
		addAction("Going for walk");
		//Cleanliness bar decreases by one, energy bar increases by 4, happiness bar increases by 4
		cleanlinessStatus = cleanlinessStatus - 1;
		energyStatus = energyStatus + 4;
		happinessStatus = happinessStatus + 4;
		setCleanliness(cleanlinessStatus);
		setEnergy(energyStatus);
		setHappiness(happinessStatus);
		printStats();
	}

	if (growthPhase == 4 && accident == 2) {
		cout << getName() << "got lose!" << endl;
		addAction(getName() + " got lose!");
		//Cleanliness bar decreases by 4, energy bar decreases by 4, happiness bar decreases by 4
		cleanlinessStatus = cleanlinessStatus - 4;
		energyStatus = energyStatus - 4;
		happinessStatus = happinessStatus - 4;
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

	//EGG STAGE 

	if (growthPhase == 1 && accident != 3) {
		cout << "Playing a game of fetch" << endl;
		addAction("Playing a game of fetch");
		//Cleanliness bar decreases by 1, energy bar decreases by 1, happiness bar increases by 2
		cleanlinessStatus -= 1;
		energyStatus -= 1;
		happinessStatus += 2;
		setCleanliness(cleanlinessStatus);
		setEnergy(energyStatus);
		setHappiness(happinessStatus);
		printStats();
	}

	if (growthPhase == 1 && accident == 3) {
		cout << getName() << " will not drop the ball!" << endl;
		addAction(getName() + " will not drop the ball!");
		//Cleanliness bar decreases by 2, energy bar decreases by 2, happiness bar increases by 2
		cleanlinessStatus -= 2;
		energyStatus -= 2;
		happinessStatus += 2;
		setCleanliness(cleanlinessStatus);
		setEnergy(energyStatus);
		setHappiness(happinessStatus);
		printStats();
	}

	//YOUNGLING STAGE

	if (growthPhase == 2 && accident != 3) {
		cout << "Playing a game of fetch" << endl;
		addAction("Playing a game of fetch");
		//Cleanliness bar decreases by 2, energy bar decreases by 2, happiness bar increases by 3
		cleanlinessStatus -= 2;
		energyStatus -= 2;
		happinessStatus += 3;
		setCleanliness(cleanlinessStatus);
		setEnergy(energyStatus);
		setHappiness(happinessStatus);
		printStats();
	}

	if (growthPhase == 2 && accident == 3) {
		cout << getName() << " will not drop the ball!" << endl;
		addAction(getName() + " will not drop the ball!");
		//Cleanliness bar decreases by 3, energy bar decreases by 3, happiness bar increases by 3
		cleanlinessStatus -= 3;
		energyStatus -= 3;
		happinessStatus += 3;
		setCleanliness(cleanlinessStatus);
		setEnergy(energyStatus);
		setHappiness(happinessStatus);
		printStats();
	}

	//TEEN STAGE

	if (growthPhase == 3 && accident != 3) {
		cout << "Playing a game of fetch" << endl;
		addAction("Playing a game of fetch");
		//Cleanliness bar decreases by 3, energy bar decreases by 3, happiness bar increases by 4
		cleanlinessStatus -= 3;
		energyStatus -= 3;
		happinessStatus += 4;
		setCleanliness(cleanlinessStatus);
		setEnergy(energyStatus);
		setHappiness(happinessStatus);
		printStats();
	}

	if (growthPhase == 3 && accident == 3) {
		cout << getName() << " will not drop the ball!" << endl;
		addAction(getName() + " will not drop the ball!");
		//Cleanliness bar decreases by 4, energy bar decreases by 4, happiness bar increases by 4
		cleanlinessStatus -= 4;
		energyStatus -= 4;
		happinessStatus += 4;
		setCleanliness(cleanlinessStatus);
		setEnergy(energyStatus);
		setHappiness(happinessStatus);
		printStats();
	}

	//ADULTHOOD STAGE

	if (growthPhase == 4 && accident != 3) {
		cout << "Playing a game of fetch" << endl;
		addAction("Playing a game of fetch");
		//Cleanliness bar decreases by 4, energy bar decreases by 4, happiness bar increases by 5
		cleanlinessStatus -= 4;
		energyStatus -= 4;
		happinessStatus += 5;
		setCleanliness(cleanlinessStatus);
		setEnergy(energyStatus);
		setHappiness(happinessStatus);
		printStats();
	}

	if (growthPhase == 4 && accident == 3) {
		cout << getName() << " will not drop the ball!" << endl;
		addAction(getName() + " will not drop the ball!");
		//Cleanliness bar decreases by 5, energy bar decreases by 5, happiness bar increases by 5
		cleanlinessStatus -= 5;
		energyStatus -= 5;
		happinessStatus += 5;
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

	//EGG STAGE
	if (growthPhase == 1 && accident != 4) {
		cout << "Eating Food" << endl;
		addAction("Eating Food");
		//Energy bar increases by 1, Happiness bar increases by 1
		energyStatus ++;
		happinessStatus ++;
		setEnergy(energyStatus);
		setHappiness(happinessStatus);
		printStats();
	}

	if (growthPhase == 1 && accident == 4) {
		cout << getName() << " ran away!" << endl;
		addAction(getName() + " ran away!");
		//Energy bar decreases by 1, happiness bar decreases by 1
		energyStatus -= 1;
		happinessStatus -= 1;
		setEnergy(energyStatus);
		setHappiness(happinessStatus);
		printStats();
	}

	//YOUNGLING STAGE 
	if (growthPhase == 2 && accident != 4) {
		cout << "Eating Food" << endl;
		addAction("Eating Food");
		//Energy bar increases by 2, Happiness bar increases by 2
		energyStatus = energyStatus + 2;
		happinessStatus = happinessStatus + 2;
		setEnergy(energyStatus);
		setHappiness(happinessStatus);
		printStats();
	}

	if (growthPhase == 2 && accident == 4) {
		cout << getName() << " ran away!" << endl;
		addAction(getName() + " ran away!");
		//Energy bar decreases by 1, happiness bar decreases by 1
		energyStatus -= 1;
		happinessStatus -= 1;
		setEnergy(energyStatus);
		setHappiness(happinessStatus);
		printStats();
	}

	//TEEN STAGE 
	if (growthPhase == 3 && accident != 4) {
		cout << "Eating Food" << endl;
		addAction("Eating Food");
		//Energy bar increases by 3, Happiness bar increases by 3
		energyStatus = energyStatus + 3;
		happinessStatus = happinessStatus + 3;
		setEnergy(energyStatus);
		setHappiness(happinessStatus);
		printStats();
	}

	if (growthPhase == 3 && accident == 4) {
		cout << getName() << " ran away!" << endl;
		addAction(getName() + " ran away!");
		//Energy bar decreases by 1, happiness bar decreases by 1
		energyStatus -= 1;
		happinessStatus -= 1;
		setEnergy(energyStatus);
		setHappiness(happinessStatus);
		printStats();
	}

	//ADULTHOOD STAGE 
	if (growthPhase == 4 && accident != 4) {
		cout << "Eating Food" << endl;
		addAction("Eating Food");
		//Energy bar increases by 4, Happiness bar increases by 4
		energyStatus = energyStatus + 4;
		happinessStatus = happinessStatus + 4;
		setEnergy(energyStatus);
		setHappiness(happinessStatus);
		printStats();
	}

	if (growthPhase == 4 && accident == 4) {
		cout << getName() << " ran away!" << endl;
		addAction(getName() + " ran away!");
		//Energy bar decreases by 1, happiness bar decreases by 1
		energyStatus -= 1;
		happinessStatus -= 1;
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

	//EGG STAGE
	if (growthPhase == 1 && accident != 1) {
		cout << "Washing " << getName() << endl;
		addAction("Washing " + getName());
		//Cleanliness bar increases by 1, happiness bar decreases by 1
		cleanlinessStatus ++;
		happinessStatus --;
		setCleanliness(cleanlinessStatus);
		setHappiness(happinessStatus);
		printStats();
	}

	if (growthPhase == 1 && accident == 1) {
		cout << getName() << " ran away!" << endl;
		addAction(getName() + " ran away!");
		//Cleanliness bar decreases by 2, happiness bar decreases by 1
		cleanlinessStatus -= 2;
		happinessStatus -= 1;
		setCleanliness(cleanlinessStatus);
		setHappiness(happinessStatus);
		printStats();
	}

	//YOUNGLING
	if (growthPhase == 2 && accident != 1) {
		cout << "Washing " << getName() << endl;
		addAction("Washing " + getName());
		//Cleanliness bar increases by 2, happiness bar decreases by 1
		cleanlinessStatus = cleanlinessStatus + 2;
		happinessStatus = happinessStatus -1;
		setCleanliness(cleanlinessStatus);
		setHappiness(happinessStatus);
		printStats();
	}

	if (growthPhase == 2 && accident == 1) {
		cout << getName() << " ran away!" << endl;
		addAction(getName() + " ran away!");
		//Cleanliness bar decreases by 3, happiness bar decreases by 1
		cleanlinessStatus -= 3;
		happinessStatus -= 1;
		setCleanliness(cleanlinessStatus);
		setHappiness(happinessStatus);
		printStats();
	}

	//TEEN STAGE
	if (growthPhase == 3 && accident != 1) {
		cout << "Washing " << getName() << endl;
		addAction("Washing " + getName());
		//Cleanliness bar increases by 3, happiness bar decreases by 1
		cleanlinessStatus = cleanlinessStatus + 3;
		happinessStatus = happinessStatus - 1;
		setCleanliness(cleanlinessStatus);
		setHappiness(happinessStatus);
		printStats();
	}

	if (growthPhase == 3 && accident == 1) {
		cout << getName() << " ran away!" << endl;
		addAction(getName() + " ran away!");
		//Cleanliness bar decreases by 4, happiness bar decreases by 1
		cleanlinessStatus -= 4;
		happinessStatus -= 1;
		setCleanliness(cleanlinessStatus);
		setHappiness(happinessStatus);
		printStats();
	}

	//ADULTHOOD STAGE
	if (growthPhase == 4 && accident != 1) {
		cout << "Washing " << getName() << endl;
		addAction("Washing " + getName());
		//Cleanliness bar increases by 4, happiness bar decreases by 1
		cleanlinessStatus = cleanlinessStatus + 4;
		happinessStatus = happinessStatus - 1;
		setCleanliness(cleanlinessStatus);
		setHappiness(happinessStatus);
		printStats();
	}

	if (growthPhase == 4 && accident == 1) {
		cout << getName() << " ran away!" << endl;
		addAction(getName() + " ran away!");
		//Cleanliness bar decreases by 5, happiness bar decreases by 1
		cleanlinessStatus -= 5;
		happinessStatus -= 1;
		setCleanliness(cleanlinessStatus);
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