// HeroesOfChumber.cpp
// Author : cmikkelborg
// Description: A game just for fun, and to practice the code I am learning.
// Last modified: 05/10/2018


#include "stdafx.h"
#include <iostream>
#include <string>
#include "heroes.h"
using namespace std;

void displayChar(Hero&);

int main()
{
	Hero Chuck("Chuck");
	Hero Baba("Baba");

	Chuck.setAgility(10);
	Baba.setStamina(8);

	//displayChar(Chuck);
	//displayChar(Baba);

	Baba.heroPowerUp();
	Chuck.heroAttack(Baba);

	Baba.heroAttack(Chuck);

	displayChar(Chuck);
	displayChar(Baba);

	system("pause");
	return 0;
}


void displayChar(Hero& h1)
{
	cout << endl << endl << "Hero " << h1.getName() << " Stats: " << endl;
	cout << "experience: " << h1.getExperience() << endl;
	cout << "Health: " << h1.getHealth() << endl;
	cout << "Stamina: " << h1.getStamina() << endl;
	cout << "Strength: " << h1.getStrength() << endl;
	cout << "Agility: " << h1.getAgility() << endl;
	cout << "Intellect: " << h1.getIntellect() << endl;
}
