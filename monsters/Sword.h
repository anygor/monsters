#pragma once
#include "BaseWeapon.h"
class Sword :
    public virtual BaseWeapon
{
public:
    Sword();
    Sword(int damage, int speed);
};


