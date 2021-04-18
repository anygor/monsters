#include "Player.h"
#include "AbstractWeapon.h"

int Player::getHealth()
{
	return this->health;
}

AbstractWeapon* Player::getWeapon()
{
	return this->weapon;
}

void Player::setHealth(int health)
{
	this->health = health;
}

void Player::setWeapon(AbstractWeapon& weapon)
{
	this->weapon = &weapon;
}

Player::Player()
{
	this->health = 100;
}

Player::Player(int health, AbstractWeapon& weapon)
{
	this->health = health;
	this->weapon = &weapon;
}

int Player::hit(AbstractMonster& monster)
{
	int monsterHealth = monster.getHealth();
	AbstractWeapon* playerWeapon = this->getWeapon();
	monsterHealth -= playerWeapon->getDamage();
	if (monsterHealth <= 0) { 
		monsterHealth = 0; 
	}
	monster.setHealth(monsterHealth);
	return monsterHealth;
}