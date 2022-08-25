#pragma once

#include "Enemies.h"
#include <cstdlib>



Player E_Goblin(Player);
Player E_Wolf(Player);
Player E_Gaint(Player);
Player E_Camp(Player);
Player E_Random(Player);
int Hit(Player, Enemy);
int Hit(Enemy, Player);