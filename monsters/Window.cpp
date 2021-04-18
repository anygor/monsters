#include "Window.h"
#include "Map.h"
#include "MapCell.h"
#include "Player.h"
#include "Fists.h"
#include "Sword.h"
#include "Satyr.h"
#include <Windows.h>
#include <string>

void Window::launch() {
	Map map = *(new Map());
	Player* player = new Player();
	player->setWeapon(*(new Sword()));
	std::list<MapCell> gameMap = map.getMap();
	for (std::list<MapCell>::iterator cell = gameMap.begin(); cell != gameMap.end(); ++cell) {
		cell->setIsPlayered(true);
		map.setMap(gameMap);
		showMap(map);
		if (cell->getIsMonstered()) {
			showFight(*player, *(new Satyr()));
			if (player->getHealth() == 0) {
				std::cout << "\nYou were lethaly wounded\n";
				break;
			}
			cell->setIsMonstered(false);
		}
		cell->setIsPlayered(false);
	}
	gameMap.pop_back();
	MapCell victoryCell = *(new MapCell(false, true));
	gameMap.push_back(victoryCell);
	map.setMap(gameMap);
	showMap(map);
	std::cout << "You have completed your journey\n";
}

void Window::showMap(Map& map) {
	system("cls");
	std::cout << "-----------------------------------------------------------------------------\n";
	for (MapCell cell : map.getMap()) {
		if (cell.getIsPlayered()) {
			if (cell.getIsMonstered()) {
				std::cout << "  X  ";
			} else {
				std::cout << " o/  ";
			}
		} else if (cell.getIsMonstered()) {
			std::cout << " " + std::string(cell.getOccupyingMonster().getAsciiSprite()) + " ";
		} else {
			std::cout << "     ";
		}
	}
	std::cout << "\n-----------------------------------------------------------------------------\n";
	Sleep(1000);
}

void Window::showFight(Player& player, AbstractMonster& monster) {
	while (player.getHealth() > 0 && monster.getHealth() > 0) {
		system("cls");
		std::cout << " o/   >_< \n";
		std::cout << std::string(std::to_string(player.getHealth()) + "    " + std::to_string(monster.getHealth()) + "\n");
		Sleep(1000);
		player.hit(monster);
		system("cls");
		std::cout << "  o/  >_< \n";
		std::cout << std::string(std::to_string(player.getHealth()) + "    " + std::to_string(monster.getHealth()) + "\n");
		Sleep(100);
		system("cls");
		std::cout << " o/   >_< \n";
		std::cout << std::string(std::to_string(player.getHealth()) + "    " + std::to_string(monster.getHealth()) + "\n");
		if (monster.getHealth() > 0) {
			Sleep(1000);
			monster.hit(player);
			system("cls");
			std::cout << " o/  >_<  \n";
			std::cout << std::string(std::to_string(player.getHealth()) + "    " + std::to_string(monster.getHealth()) + "\n");
			Sleep(100);
			system("cls");
			std::cout << " o/   >_< \n";
			std::cout << std::string(std::to_string(player.getHealth()) + "    " + std::to_string(monster.getHealth()) + "\n");
		}
	}
}
