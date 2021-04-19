#pragma once
#include "MonsterFactory.h"
#include "Map.h"
#include "MapCell.h"
#include "Fiend.h"
#include "Demon.h"
#include "Satyr.h"

class HardFactory :
    public MonsterFactory
{
public:
    AbstractMonster* createMonster() override {
        srand(time(0));
        int probability = std::rand() % 101;
        if (probability <= 40) {
            return new Demon();
        }
        else if (probability <= 80) {
            return new Fiend();
        }
        return new Satyr();
    }
};


