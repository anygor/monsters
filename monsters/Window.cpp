#include "Window.h"
#include "Map.h"
#include "MapCell.h"
#include "Player.h"
#include "Fists.h"
#include "Sword.h"
#include "Satyr.h"
#include <Windows.h>
#include <string>
#include <vector>
#include "MonsterFactory.h"
#include "EasyFactory.h"
#include "HardFactory.h"
#include "MonsterFactory.h"
#include <ctime>

void Window::launch() {
	bool lost = false;
	std::cout << "Set the difficulty:\n1 - easy\n2 - hard\n";
	int difficulty;
	std::cin >> difficulty;

	std::list<MapCell> gameMap;
	MonsterFactory* factory;
	switch (difficulty)
	{
	case 1:{
		factory = new EasyFactory();
		break;
	}
	case 2: {
		factory = new HardFactory();
		break;
	}

	default:
		factory = new EasyFactory();
	}

	for (int i = 0; i < 12; i++) {
		srand(time(0));
		int probability = std::rand() % 101;
		if (probability <= 100) {
			gameMap.push_back(*(new MapCell(true, false, *(factory->createMonster()))));
		}
		else {
			gameMap.push_back(*(new MapCell(false, false)));
		}
	}

	Map map = *(new Map());
	map.setMap(gameMap);

	Player* player = new Player();
	player->setHealth(1000);
	player->setWeapon(*(new Sword()));
	for (std::list<MapCell>::iterator cell = gameMap.begin(); cell != gameMap.end(); ++cell) {
		system("cls");
		cell->setIsPlayered(true);
		map.setMap(gameMap);
		showMap(map);
		if (cell->getIsMonstered()) {
			showFight(*player, *(cell->getOccupyingMonster()));
			if (player->getHealth() == 0) {
				std::cout << "\nYou were lethaly wounded\n";
				lost = true;
				break;
			}
			cell->setIsMonstered(false);
		}
		cell->setIsPlayered(false);
	}
	if (!lost) {
		gameMap.pop_back();
		MapCell victoryCell = *(new MapCell(false, true));
		gameMap.push_back(victoryCell);
		map.setMap(gameMap);
		showMap(map);
		std::cout << "You have completed your journey\n";
	}
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
			std::cout << " " + std::string(cell.getOccupyingMonster()->getAsciiSprite()) + " ";
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
		std::cout << " o/   " + monster.getAsciiSprite() + " \n";
		std::cout << std::string(std::to_string(player.getHealth()) + "    " + std::to_string(monster.getHealth()) + "\n");
		Sleep(1000);
		player.hit(monster);
		system("cls");
		std::cout << "  o/  " + monster.getAsciiSprite() + " \n";
		std::cout << std::string(std::to_string(player.getHealth()) + "    " + std::to_string(monster.getHealth()) + "\n");
		Sleep(100);
		system("cls");
		std::cout << " o/   " + monster.getAsciiSprite() + " \n";
		std::cout << std::string(std::to_string(player.getHealth()) + "    " + std::to_string(monster.getHealth()) + "\n");
		if (monster.getHealth() > 0) {
			Sleep(1000);
			monster.hit(player);
			system("cls");
			std::cout << " o/  " + monster.getAsciiSprite() + "  \n";
			std::cout << std::string(std::to_string(player.getHealth()) + "    " + std::to_string(monster.getHealth()) + "\n");
			Sleep(100);
			system("cls");
			std::cout << " o/   " + monster.getAsciiSprite() + " \n";
			std::cout << std::string(std::to_string(player.getHealth()) + "    " + std::to_string(monster.getHealth()) + "\n");
		}
	}
}
