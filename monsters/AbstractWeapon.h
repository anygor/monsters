#pragma once
class AbstractWeapon
{
public:
	virtual int getDamage() = 0;
	virtual int getSpeed() = 0;
	virtual void setDamage(int damage) = 0;
	virtual void setSpeed(int speed) = 0;
};

