#pragma once


#include "Creature.h"
#include "Player.h"

class Enemy : public Creature
{
public:
	Enemy(string = "Enemy", int = 30, int = 5, int = 0, int = 1);
	Enemy Goblin(int=1);
	Enemy Wolf(int = 1);
	Enemy Giant(int = 3);

};
