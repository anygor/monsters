#include "Window.h"
#include "Map.h"
#include "MapCell.h"
#include "Player.h"
#include "Fists.h"
#include "Satyr.h"
#include <Windows.h>

void Window::launch() {
	Map map = *(new Map());
	Player* player = new Player();
	player->setWeapon(*(new Fists()));
	std::list<MapCell> gameMap = map.getMap();
	for (std::list<MapCell>::iterator cell = gameMap.begin(); cell != gameMap.end(); ++cell) {
		cell->setIsPlayered(true);
		map.setMap(gameMap);
		showMap(map);
		if (cell->getIsMonstered()) {
			showFight(*player, *(new Satyr()));
			cell->setIsMonstered(false);
		}
		cell->setIsPlayered(false);
	}
}

void Window::showMap(Map& map) {
	system("cls");
	std::cout << "-----------------------------------------------------------------------------\n";
	for (MapCell cell : map.getMap()) {
		if (cell.getIsPlayered()) {
			if (cell.getIsMonstered()) {
				std::cout << " xxx ";
			} else {
				std::cout << " o/  ";
			}
		} else if (cell.getIsMonstered()) {
			std::cout << " >_< ";
		} else {
			std::cout << "     ";
		}
	}
	std::cout << "\n-----------------------------------------------------------------------------\n";
	Sleep(1000);
}

void Window::showFight(Player& player, AbstractMonster& monster) {

}
