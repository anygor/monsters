#include "MapCell.h"
#include "AbstractMonster.h"

bool MapCell::getIsMonstered()
{
	return this->isMonstered;
}

bool MapCell::getIsPlayered()
{
	return this->isPlayered;
}

void MapCell::setIsMonstered(bool isMonstered)
{
	this->isMonstered = isMonstered;
}

void MapCell::setIsPlayered(bool isPlayered)
{
	this->isPlayered = isPlayered;
}

MapCell::MapCell(bool isMonstered, bool isPlayered, AbstractMonster& occupyingMonster)
{
	this->isMonstered = isMonstered;
	this->isPlayered = isPlayered;
	this->occupyingMonster = &occupyingMonster;
}

MapCell::MapCell(bool isMonstered, bool isPlayered)
{
	this->isMonstered = isMonstered;
	this->isPlayered = isPlayered;
}

AbstractMonster MapCell::getOccupyingMonster()
{
	return *this->occupyingMonster;
}

void MapCell::setOccupyingMonster(AbstractMonster& occupyingMonster) 
{
	this->occupyingMonster = &occupyingMonster;
}