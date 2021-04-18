#include "AbstractWeapon.h"

int AbstractWeapon::getDamage()
{
	return this->damage;
}

void AbstractWeapon::setDamage(int damage)
{
	this->damage = damage;
}

int AbstractWeapon::getSpeed()
{
	return this->speed;
}

void AbstractWeapon::setSpeed(int speed)
{
	this->speed = speed;
}