#pragma once

#include "Player.h"
#include <string>
#include <iostream>

using namespace std;

Player::Player(string Name, int Maxhp, int Att, int Def, int Level) {
	set_Name(Name);
	set_Maxhp(Maxhp);
	set_Att(Att);
	set_Def(Def);
	set_Level(Level);
	set_Gold();
	set_Exp();
}

void Player::set_Name(string Name) {
	Creature::set_Name(Name);
}

void Player::set_Hp(int Hp){
	Creature::set_Hp(Hp);

}

void Player::set_Att(int Att) {
	Creature::set_Att(Att);
}

void Player::set_Def(int Def) {
	Creature::set_Def(Def);
}

void Player::set_Level(int Level) {
	Creature::set_Level(Level);
}

void Player::set_Gold(int gold) {
	_Gold = gold;
}

void Player::set_Exp(int exp) {
	_Exp = exp;
}

string Player::get_Name() {
	return Creature::get_Name();
}

int Player::get_Level() {
	return Creature::get_Level();
}

int Player::get_Gold() {
	return _Gold;
}

int Player::get_Exp() {
	return _Exp;
}

void Player::get_Stats() {
	std::cin.ignore();
	cout << "Stats:" << endl;
	cout << "Name: " << get_Name() << endl;
	cout << "Level: " << get_Level() << endl;
	cout << "Hp: " << get_Hp() << " / " << get_Maxhp() << endl;
	cout << "Attack: " << get_Att() << endl;
	cout << "Defense: " << get_Def() << endl;
	cout << "Gold: " << get_Gold() << endl;
	cout << "Exp: " << get_Exp() << endl;
	std::cin.ignore();
}
