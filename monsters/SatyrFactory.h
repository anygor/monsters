#pragma once
#include "MonsterFactory.h"
#include "Satyr.h"

class SatyrFactory : public MonsterFactory
{
public:
	AbstractMonster* createMonster() override
	{
		return new Satyr();
	}
};
