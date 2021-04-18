#include "AbstractMonster.h"
#include "AbstractWeapon.h"
#include "Player.h"

int AbstractMonster::getHealth()
{
	return this->health;
}

AbstractWeapon AbstractMonster::getWeapon() 
{
	return *this->weapon;
}

void AbstractMonster::setHealth(int health)
{
	this->health = health;
}

void AbstractMonster::setWeapon(AbstractWeapon weapon)
{
	this->weapon = &weapon;
}

AbstractMonster::AbstractMonster() 
{
	this->health = 100;
}

AbstractMonster::AbstractMonster(int health, AbstractWeapon weapon) 
{
	this->health = health;
	this->weapon = &weapon;
}

int AbstractMonster::hit(Player& player) 
{
	int playerHealth = player.getHealth();
	AbstractWeapon playerWeapon = this->getWeapon();
	playerHealth -= playerWeapon.getDamage();
	if (playerHealth <= 0) {
		playerHealth = 0;
	}
	return playerHealth;
}
