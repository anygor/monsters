#include "Fists.h"

Fists::Fists() {
	this->setDamage(10);
	this->setSpeed(1);
}

Fists::Fists(int damage, int speed) {
	this->setDamage(damage);
	this->setSpeed(speed);
}