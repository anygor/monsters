#pragma once
#include "BaseMonster.h"
class AbstractWeapon;
class Satyr :
    public virtual BaseMonster
{
public:
    int hit(Player& player) override;
    std::string getAsciiSprite() override;
public:
    Satyr();
    Satyr(int health, AbstractWeapon& weapon);
};

