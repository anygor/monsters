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

AbstractWeapon::AbstractWeapon() {
	this->damage = 0;
	this->speed = 0;
}

AbstractWeapon::AbstractWeapon(int damage, int speed) {
	this->damage = damage;
	this->speed = speed;
}