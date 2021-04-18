#include "BaseMonster.h"
#include "AbstractWeapon.h"
#include "Player.h"

int BaseMonster::getHealth()
{
	return this->health;
}

AbstractWeapon* BaseMonster::getWeapon()
{
	return this->weapon;
}

void BaseMonster::setHealth(int health)
{
	this->health = health;
}

void BaseMonster::setWeapon(AbstractWeapon& weapon)
{
	this->weapon = &weapon;
}

BaseMonster::BaseMonster()
{
	this->health = 100;
}

BaseMonster::BaseMonster(int health, AbstractWeapon& weapon)
{
	this->health = health;
	this->weapon = &weapon;
}

int BaseMonster::hit(Player& player)
{
	int playerHealth = player.getHealth();
	AbstractWeapon* weapon = this->getWeapon();
	playerHealth -= weapon->getDamage();
	if (playerHealth <= 0) {
		playerHealth = 0;
	}
	player.setHealth(playerHealth);
	return playerHealth;
}

std::string BaseMonster::getAsciiSprite()
{
	return std::string();
}

