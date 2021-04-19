#pragma once
#include "MonsterFactory.h"
#include "Map.h"
#include "MapCell.h"
#include "Satyr.h"
#include "Fiend.h"
#include "Demon.h"
#include <ctime>

class EasyFactory :
    public MonsterFactory
{
public:
    AbstractMonster* createMonster() override {
        srand(time(0));
        int probability = std::rand() % 101;
        if (probability <= 5) {
            return new Demon();
        }
        else if (probability <= 30) {
            return new Fiend();
        }
        return new Satyr();
    }
};

