#pragma once
class MapCell
{
public:
	MapCell(bool isMonstered, bool isPlayed);
	bool getIsMonstered();
	bool getIsPlayered();
	void setIsMonstered(bool isMonstered);
	void setIsPlayered(bool isPlayered);
private:
	bool isMonstered;
	bool isPlayered;
};

