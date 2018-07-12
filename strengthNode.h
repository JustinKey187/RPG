#pragma once
#include <string>
#include "PlayerProgress.h"
#include <iostream>

class Player;

class strengthNode
{
private:
	int stats; //instance member variables
	int playerlevel;//instance member variables
	static int maxLevelAchieved;
	PlayerProgress log;
	Player* player;
	std::string Updates;
public:
	strengthNode(int sta, Player* p1) :stats(sta), player(p1), playerlevel(++maxLevelAchieved), log(playerlevel){};
	int Levelup(int amount){
		log.AddLevelup("today", amount);
		stats += amount;
		return stats;
	}

};