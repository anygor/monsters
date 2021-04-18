#pragma once
#include "AbstractMonster.h"
class AbstractMonster;

class Player
{
public:
	int hit(AbstractMonster& monster);
public:
	Player();
	Player(int health, AbstractWeapon& weapon);
	int getHealth();
	AbstractWeapon getWeapon();
	void setHealth(int health);
	void setWeapon(AbstractWeapon& weapon);
private:
	int health;
	AbstractWeapon* weapon;
};

