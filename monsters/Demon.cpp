#include "Demon.h"

#include "Demon.h"
#include "Player.h"
#include "AbstractWeapon.h"
#include "Sword.h"

int Demon::hit(Player& player)
{
	int playerHealth = player.getHealth();
	AbstractWeapon* weapon = this->getWeapon();
	if (!tired) {
		playerHealth -= 3 * (weapon->getDamage());
	}
	tired = !tired;
	player.setHealth(playerHealth);
	return playerHealth;
}

Demon::Demon()
{
	this->setHealth(100);
	Sword* sword = new Sword();
	this->setWeapon(*sword);
}

Demon::Demon(int health, AbstractWeapon& weapon) : BaseMonster(health, weapon) 
{
	this->tired = false;
}

std::string Demon::getAsciiSprite()
{
	return "UwU";
}

