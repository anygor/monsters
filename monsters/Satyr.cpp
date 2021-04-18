#include "Satyr.h"
#include "Player.h"

int Satyr::hit(Player& player)
{
	int playerHealth = player.getHealth();
	AbstractWeapon playerWeapon = this->getWeapon();
	if (this->getHealth() >= 10) {
		playerHealth -= playerWeapon.getDamage();
	}
	else {
		playerHealth -= 2 * playerWeapon.getDamage();
	}
	if (playerHealth <= 0) {
		playerHealth = 0;
	}
	return playerHealth;
}
