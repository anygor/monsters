#pragma once
class AbstractMonster;
class MapCell
{
public:
	MapCell(bool isMonstered, bool isPlayed, AbstractMonster& occupyingMonster);
	MapCell(bool isMonstered, bool isPlayed);
	bool getIsMonstered();
	bool getIsPlayered();
	AbstractMonster getOccupyingMonster();
	void setIsMonstered(bool isMonstered);
	void setIsPlayered(bool isPlayered);
	void setOccupyingMonster(AbstractMonster& occupyingMonster);
private:
	bool isMonstered;
	bool isPlayered;
	AbstractMonster* occupyingMonster;
};

