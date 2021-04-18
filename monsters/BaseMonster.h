#pragma once
#include "AbstractMonster.h"
class AbstractWeapon;

class BaseMonster :
    public AbstractMonster
{
public:
	int hit(Player& player) override;
	std::string getAsciiSprite() override;
public:
	int getHealth() override;
	AbstractWeapon* getWeapon() override;
	void setHealth(int health) override;
	void setWeapon(AbstractWeapon& weapon) override;
public:
	BaseMonster();
	BaseMonster(int health, AbstractWeapon& weapon);
private:
	int health;
	AbstractWeapon* weapon;
};

