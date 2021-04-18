#include "Sword.h"

Sword::Sword() {
	this->setDamage(40);
	this->setSpeed(1.5);
}

Sword::Sword(int damage, int speed) {
	this->setDamage(damage);
	this->setSpeed(speed);
}