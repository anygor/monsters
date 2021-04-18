#pragma once
#include "AbstractWeapon.h"
class Sword :
    public AbstractWeapon
{
public:
    Sword();
    Sword(int damage, int speed);
};


