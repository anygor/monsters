#pragma once
#include <list>
class MapCell;
class Map
{
public:
	Map();
	std::list<MapCell> getMap();
	void setMap(std::list<MapCell>& map);
private:
	std::list<MapCell> map;
};

