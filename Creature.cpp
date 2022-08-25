#pragma once

#include "Creature.h"

Creature::Creature(string Name) {
	set_Name(Name);
}

void Creature::set_Name(string Name){
	_Name = Name;
}

void Creature::set_Maxhp(int Maxhp) {
	_Maxhp = Maxhp;
	_Hp = Maxhp;
}

void Creature::set_Hp(int Hp) {
	_Hp = Hp;
}

void Creature::set_Att(int Att) {
	_Att = Att;
}

void Creature::set_Def(int Def){
	_Def = Def;
}

void Creature::set_Level(int Level) {
	_Level = Level;
}

string Creature::get_Name() {
	return _Name;
}

int Creature::get_Hp() {
	return _Hp;
}

int Creature::get_Maxhp() {
	return _Maxhp;
}

int Creature::get_Att() {
	return _Att;
}

int Creature::get_Def() {
	return _Def;
}

int Creature::get_Level() {
	return _Level;
}

