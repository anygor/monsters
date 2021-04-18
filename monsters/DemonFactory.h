#pragma once
#include "MonsterFactory.h"
#include "Demon.h"

class DemonFactory : public MonsterFactory
{
public:
	AbstractMonster* createMonster() override
	{
		return new Demon();
	}
};
