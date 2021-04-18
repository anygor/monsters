#pragma once
#include "BaseMonster.h"
class Fiend :
    public virtual BaseMonster
{
public:
    int hit(Player& player) override;
    std::string getAsciiSprite() override;
public:
    Fiend();
    Fiend(int health, AbstractWeapon& weapon);
};

