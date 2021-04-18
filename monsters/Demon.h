#pragma once
#include "BaseMonster.h"
class Demon :
    public virtual BaseMonster
{
public:
    int hit(Player& player) override;
    std::string getAsciiSprite() override;
public:
    Demon();
    Demon(int health, AbstractWeapon& weapon);
private:
    bool tired;
};

