#pragma once
#include "MonsterFactory.h"
#include "Fiend.h"

class FiendFactory : public MonsterFactory
{
public:
	AbstractMonster* createMonster() override
	{
		return new Fiend();
	}
};
