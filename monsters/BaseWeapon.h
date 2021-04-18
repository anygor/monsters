#pragma once
#include "AbstractWeapon.h"

class BaseWeapon :
    public AbstractWeapon
{
public:
	int getDamage() override;
	int getSpeed() override;
	void setDamage(int damage) override;
	void setSpeed(int speed) override;
public:
	BaseWeapon();
	BaseWeapon(int damage, int speed);
private:
	int damage;
	int speed;
};

