#pragma once

class strengthNode;
class speedNode;
class magicNode;
class healthNode;

class PlayerProgress
{
private:
	int playerlevel;
public:
	PlayerProgress(int pl) :playerlevel(pl){}; //stores the int and stores it in playerlevel

	void AddLevelup(std::string date, int level){}
};