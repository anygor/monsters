#pragma once
#include "BaseWeapon.h"
class Fists :
    public virtual BaseWeapon
{
public:
    Fists();
    Fists(int damage, int speed);
};

