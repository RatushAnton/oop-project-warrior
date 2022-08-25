#pragma once

#include "Enemies.h"


class Player: public Creature
{
private:
	int _Exp;
	int _Gold;

public:
	Player(string = "No_Name", int = 100,int =10, int = 0, int = 1);
	void set_Name(string = "No_Name");
	void set_Hp(int = 100);
	void set_Att(int = 10);
	void set_Def(int = 0);
	void set_Level(int=1);
	void set_Gold(int =0);
	void set_Exp(int =0);
	string get_Name();
	int get_Level();
	int get_Gold();
	int get_Exp();
	void get_Stats();
};

