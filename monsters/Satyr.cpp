#include "Satyr.h"
#include "Player.h"
#include "AbstractWeapon.h"
#include "Fists.h"

int Satyr::hit(Player& player)
{
	int playerHealth = player.getHealth();
	AbstractWeapon weapon = this->getWeapon();
	if (this->getHealth() >= 10) {
		playerHealth -= weapon.getDamage();
	}
	else {
		playerHealth -= 2 * weapon.getDamage();
	}
	if (playerHealth <= 0) {
		playerHealth = 0;
	}
	player.setHealth(playerHealth);
	return playerHealth;
}

Satyr::Satyr() 
{
	this->setHealth(100);
	Fists* fists = new Fists();
	this->setWeapon(*fists);
}

std::string Satyr::getAsciiSprite() 
{
	return ">_<";
}
