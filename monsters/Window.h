#pragma once
#include <iostream>
class Player;
class AbstractMonster;
class Map;
class Window
{
public:
	void launch();
	void showMap(Map &map);
	void showFight(Player& player, AbstractMonster& monster);
};

