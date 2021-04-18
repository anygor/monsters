#pragma once
class AbstractWeapon
{
public:
	AbstractWeapon();
	AbstractWeapon(int damage, int speed);
	int getDamage();
	int getSpeed();
	void setDamage(int damage);
	void setSpeed(int speed);
private:
	int damage;
	int speed;
};

