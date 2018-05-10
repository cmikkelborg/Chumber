// Definitions for the Hero Class.
//


#include "stdafx.h"
#include <iostream>
#include <string>
#include "heroes.h"
using namespace std;

/*** Constructor Definitions ***/
Hero::Hero() : name(""), experience(0), health(10), stamina(2), strength(5), agility(2), intellect(0), itemsPtr(NULL), turn(0)
{
}
Hero::Hero(string n) : experience(0), health(10), stamina(2), strength(5), agility(2), intellect(0), itemsPtr(NULL), turn(0)
{
	name = n;
}
Hero::Hero(string n, int exp, double hp, double stam, double str, double agil, double intl) : itemsPtr(NULL), turn(0)
{
	name = n;
	experience = exp;
	health = hp;
	stamina = stam;
	strength = str;
	agility = agil;
	intellect = intl;
}


/*** Destructor Definition ***/
Hero::~Hero()
{
	if (itemsPtr != NULL)
		delete[] itemsPtr;
	itemsPtr = NULL;
	itemsOnHand = 0;
}


/*** Accessor Definitions ***/
string Hero::getName()
{
	return(name);
}
int Hero::getExperience()
{
	return(experience);
}
double Hero::getHealth()
{
	return(health);
}
double Hero::getStamina()
{
	return(stamina);
}
double Hero::getStrength()
{
	return(strength);
}
double Hero::getAgility()
{
	return(agility);
}
double Hero::getIntellect()
{
	return(intellect);
}
int Hero::getTurn()
{
	return(turn);
}


/*** Mutator Definitions ***/
void Hero::setName(string n)
{
	name = n;
}
void Hero::setExperience(int exp)
{
	experience = exp;
}
void Hero::setHealth(double hp)
{
	health = hp;
}
void Hero::setStamina(double stam)
{
	stamina = stam;
}
void Hero::setStrength(double str)
{
	strength = str;
}
void Hero::setAgility(double agil)
{
	agility = agil;
}
void Hero::setIntellect(double intl)
{
	intellect = intl;
}
void Hero::setTurn(int t)
{
	turn = t;
}


/** Action Functions ***/
void Hero::heroAttack(Hero & enemy)
{
	double attac = (strength + (agility / .5)) - (enemy.stamina / .5);
	cout << endl << "Hero " << name << " attacks and deals " << attac << " amount of damage to " << enemy.getName() << "!" << endl;
	enemy.health -= attac;
	cout << "Hero " << enemy.getName() << "'s health now at " << enemy.getHealth() << "!" << endl;
	++turn;
}
void Hero::heroPowerUp()
{
	cout << endl << "Hero " << name << " waits... and powers up!" << endl;
	strength = strength + (strength / 5);
	stamina = stamina + (stamina / 5);
	++turn;
}
void Hero::heroWait()
{
	++turn;
}
void Hero::heroUseItem(int item)
{
}