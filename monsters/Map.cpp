#include "Map.h"
#include "MapCell.h"
#include "Satyr.h"
#include "Fiend.h"
#include "Demon.h"

std::list<MapCell> Map::getMap() {
	return this->map;
}

void Map::setMap(std::list<MapCell>& map) 
{
	this->map = map;
}

Map::Map() {
	this->map = { *(new MapCell(false, true)),
					* (new MapCell(false, false)),
					* (new MapCell(true, false, *(new Fiend()))), 
					* (new MapCell(false, false)), 
					* (new MapCell(true, false, *(new Satyr()))),
					* (new MapCell(true, false, *(new Demon()))) };
}