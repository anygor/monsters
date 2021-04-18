#pragma once
class AbstractMonster;

class MonsterFactory 
{
public:
	virtual AbstractMonster* createMonster() = 0;
};
