#pragma once
#include "AbstractMonster.h"
class Satyr :
    public AbstractMonster
{
public:
    int hit(Player& player);
    std::string getAsciiSprite();
public:
    Satyr();
};

