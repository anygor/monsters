#pragma once
class Map;
class AbstractMonster;

class MonsterFactory 
{
public:
	virtual AbstractMonster* createMonster() = 0;
};
