#include "Fiend.h"
#include "Player.h"
#include "AbstractWeapon.h"
#include "Sword.h"
#include <ctime>

int Fiend::hit(Player& player)
{
	int playerHealth = player.getHealth();
	AbstractWeapon* weapon = this->getWeapon();
	srand(time(0));
	int probability = std::rand() % 2;
	if (probability == 0) {
		playerHealth -= weapon->getDamage();
	}
	else {
		playerHealth -= weapon->getDamage();
		playerHealth -= weapon->getDamage();
	}
	if (playerHealth <= 0) {
		playerHealth = 0;
	}
	player.setHealth(playerHealth);
	return playerHealth;
}

Fiend::Fiend()
{
	this->setHealth(100);
	Sword* sword = new Sword();
	this->setWeapon(*sword);
}

Fiend::Fiend(int health, AbstractWeapon& weapon) : BaseMonster(health, weapon) {}

std::string Fiend::getAsciiSprite()
{
	return "O_O";
}

