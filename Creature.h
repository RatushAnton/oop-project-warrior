#pragma once

#include <string>
using namespace std;

class Creature
{
private:
	string _Name;
	int _Maxhp;
	int _Hp;
	int _Att;
	int _Def;
	int _Level;
	
public:
	Creature(string = "No_Name");
	void set_Name(string name = "No_Name");
	void set_Maxhp(int = 100);
	void set_Hp(int=100);
	void set_Att(int =10);
	void set_Def(int =0);
	void set_Level(int =1);
	string get_Name();
	virtual int get_Maxhp();
	virtual int get_Hp();
	virtual int get_Att();
	virtual int get_Def();
	virtual int get_Level();
};

