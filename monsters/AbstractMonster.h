#pragma once
#include <string>
class AbstractWeapon;
class Player;

class AbstractMonster
{
public:
	virtual int hit(Player& player) = 0;
	virtual std::string getAsciiSprite() = 0;
public:
	virtual int getHealth() = 0;
	virtual AbstractWeapon* getWeapon() = 0;
	virtual void setHealth(int health) = 0;
	virtual void setWeapon(AbstractWeapon& weapon) = 0;

};

