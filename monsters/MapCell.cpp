#include "MapCell.h"

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

MapCell::MapCell(bool isMonstered, bool isPlayered)
{
	this->isMonstered = isMonstered;
	this->isPlayered = isPlayered;
}