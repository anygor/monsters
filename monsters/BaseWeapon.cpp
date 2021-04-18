#include "BaseWeapon.h"

int BaseWeapon::getDamage()
{
	return this->damage;
}

void BaseWeapon::setDamage(int damage)
{
	this->damage = damage;
}

int BaseWeapon::getSpeed()
{
	return this->speed;
}

void BaseWeapon::setSpeed(int speed)
{
	this->speed = speed;
}

BaseWeapon::BaseWeapon() {
	this->damage = 0;
	this->speed = 0;
}

BaseWeapon::BaseWeapon(int damage, int speed) {
	this->damage = damage;
	this->speed = speed;
}
