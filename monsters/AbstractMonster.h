#pragma once
#include "AbstractWeapon.h"
class Player;
class AbstractMonster
{
public:
	int hit(Player& player);
public:
	AbstractMonster();
	AbstractMonster(int health, AbstractWeapon weapon);
	int getHealth();
	AbstractWeapon getWeapon();
	void setHealth(int health);
	void setWeapon(AbstractWeapon weapon);
private:
	int health;
	AbstractWeapon weapon;
};

