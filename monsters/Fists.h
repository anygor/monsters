#pragma once
#include "AbstractWeapon.h"
class Fists :
    public AbstractWeapon
{
public:
    Fists();
    Fists(int damage, int speed);
};

