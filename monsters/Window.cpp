#include "Window.h"
#include "Player.h"
#include "Fists.h"
#include "Satyr.h"

void Window::launch() {
	Player* player = new Player();
	player->setWeapon(*(new Fists()));
	Satyr* satyr = new Satyr();
	while (player->getHealth() > 0) {
		satyr->hit(*player);
	}
	std::cout << "Hello, World";
}
