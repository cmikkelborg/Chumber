#pragma once

using namespace std;

//
//

class Hero
{
public:
	/*** Constructors ***/
	Hero();
	Hero(string n);
	Hero(string n, int exp, double hp, double stam, double str, double agil, double intl);

	/*** Destructor ***/
	~Hero();

	/*** Accessors ***/
	string getName();
	int getExperience();
	double getHealth();
	double getStamina();
	double getStrength();
	double getAgility();
	double getIntellect();
	int getTurn();

	/*** Mutators ***/
	void setName(string n);
	void setExperience(int exp);
	void setHealth(double hp);
	void setStamina(double stam);
	void setStrength(double str);
	void setAgility(double agil);
	void setIntellect(double intl);
	void setTurn(int t);

	/*** Helper Functions ***/


	/*** Action Functions ***/
	void heroAttack(Hero& enemy);
	void heroPowerUp();
	void heroWait();
	void heroUseItem(int item);

private:
	string name = "";
	int experience;
	double health;
	double stamina;
	double strength;
	double agility;
	double intellect;
	int turn;

	int itemsOnHand;
	string * itemsPtr = NULL;
};