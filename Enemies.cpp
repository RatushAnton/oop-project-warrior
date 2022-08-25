#pragma once

#include "Enemies.h"
#include <string>
#include <iostream>

using namespace std;

Enemy::Enemy(string Name, int Hp, int Att, int Def, int Level) {
	set_Name(Name);
	set_Hp(Hp);
	set_Att(Att);
	set_Def(Def);
	set_Level(Level);
}

Enemy Enemy::Goblin(int Level) {
	Enemy E;
	E.set_Name("Goblin");
	E.set_Maxhp(get_Hp()+Level * 5);
	E.set_Att(Level * 3);
	E.set_Def(Level * 2);
	E.set_Level(Level);
	return E;
}

Enemy Enemy::Wolf(int Level) {
	Enemy E;
	E.set_Name("Wolf");
	E.set_Maxhp(get_Hp() + Level * 5);
	E.set_Att(Level * 4);
	E.set_Def(Level * 2);
	E.set_Level(Level);
	return E;
}

Enemy Enemy::Giant(int Level) {
	Enemy E;
	E.set_Name("Gaint");
	E.set_Maxhp(get_Hp() + Level * 7);
	E.set_Att(Level * 6);
	E.set_Def(Level * 4);
	E.set_Level(Level);
	return E;
}
//Enemy::~Enemy() {
//	delete(this);
//}