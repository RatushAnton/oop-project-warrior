#pragma once

#include "Encounters.h"
#include <iostream>

using namespace std;

int Hit(Enemy E, Player P) {
	return (int)E.get_Att() - (P.get_Def() * 0.2);
}

int Hit(Player P, Enemy E) {
	return (int)P.get_Att() - (E.get_Def() * 0.2);
}

Player E_Goblin(Player P) {
	system("cls");
	Enemy E;
	E=E.Goblin();
	int flag;
	while(P.get_Hp() > 0 && E.get_Hp() > 0) {
		cout << P.get_Name() << " has " << P.get_Hp() << " / " << P.get_Maxhp() << " Hp " << E.get_Name() << " has " << E.get_Hp() << " / " << E.get_Maxhp() << " Hp" << endl << endl;
		cout << "1.Attack" << endl << "2.Guard" << endl;
		cin >> flag;
		switch (flag) {
		case 1:
			E.set_Hp(E.get_Hp() - Hit(P, E));
			cout << P.get_Name() << " attacked and dealt " << Hit(P, E) << " damage to " << E.get_Name() << endl; cout << endl;
			if (E.get_Hp() > 0) {
				P.set_Hp(P.get_Hp() - Hit(E, P));
				cout << E.get_Name() << " attacked and dealt " << Hit(E, P) << " damage to " << P.get_Name() << endl; cout << endl;
				if (P.get_Hp() <= 0) {
					cout << P.get_Name() << " is dead" << endl << endl << "Going back to camp" << endl;
					return P;
				}
			}
			else {
				cout << "Victory!!!" << endl << E.get_Name() << " is dead" << endl;
				P.set_Exp(P.get_Exp() + 2 * E.get_Level());
				P.set_Gold(P.get_Gold() + 2 * E.get_Level());
				cout << P.get_Name() << " Got " << 2 * E.get_Level() << " Exp" << " and " << 2 * E.get_Level() << " Gold" << endl;
			}
			break;

		case 2:
			cout << P.get_Name() << " has Guarded" << endl;
			cout << E.get_Name() << " attacked and dealt " << 0 << " damage to " << P.get_Name() << endl; cout << endl;
			break;

		default:
			cout << "Illegal input" << endl;
		}
	}
	return P;
}

Player E_Wolf(Player P) {
	system("cls");
	Enemy E;
	E = E.Goblin();
	int flag;
	while (P.get_Hp() > 0 && E.get_Hp() > 0) {
		cout << P.get_Name() << " has " << P.get_Hp() << " / " << P.get_Maxhp() << " Hp " << E.get_Name() << " has " << E.get_Hp() << " / " << E.get_Maxhp() << " Hp" << endl << endl;
		cout << "1.Attack" << endl << "2.Guard" << endl;
		cin >> flag;
		switch (flag) {
		case 1:
			E.set_Hp(E.get_Hp() - Hit(P, E));
			cout << P.get_Name() << " attacked and dealt " << Hit(P, E) << " damage to " << E.get_Name() << endl; cout << endl;
			if (E.get_Hp() > 0) {
				P.set_Hp(P.get_Hp() - Hit(E, P));
				cout << E.get_Name() << " attacked and dealt " << Hit(E, P) << " damage to " << P.get_Name() << endl; cout << endl;
				if (P.get_Hp() <= 0) {
					cout << P.get_Name() << " is dead" << endl << endl << "Going back to camp" << endl;
					return P;
				}
			}
			else {
				cout << "Victory!!!" << endl << E.get_Name() << " is dead" << endl;
				P.set_Exp(P.get_Exp() + 2 * E.get_Level());
				P.set_Gold(P.get_Gold() + 2 * E.get_Level());
				cout << P.get_Name() << " Got " << 2 * E.get_Level() << " Exp" << " and " << 2 * E.get_Level() << " Gold" << endl;
			}
			break;

		case 2:
			cout << P.get_Name() << " has Guarded" << endl;
			cout << E.get_Name() << " attacked and dealt " << 0 << " damage to " << P.get_Name() << endl; cout << endl;
			break;

		default:
			cout << "Illegal input" << endl;
		}
	}
	return P;
}

Player E_Gaint(Player P) {
	system("cls");
	Enemy E;
	E = E.Giant();
	int flag;
	while (P.get_Hp() > 0 && E.get_Hp() > 0) {
		cout << P.get_Name() << " has " << P.get_Hp() << " / " << P.get_Maxhp() << " Hp " << E.get_Name() << " has " << E.get_Hp() << " / " << E.get_Maxhp() << " Hp" << endl << endl;
		cout << "1.Attack" << endl << "2.Guard" << endl;
		cin >> flag;
		switch (flag) {
		case 1:
			E.set_Hp(E.get_Hp() - Hit(P, E));
			cout << P.get_Name() << " attacked and dealt " << Hit(P, E) << " damage to " << E.get_Name() << endl; cout << endl;
			if (E.get_Hp() > 0) {
				P.set_Hp(P.get_Hp() - Hit(E, P));
				cout << E.get_Name() << " attacked and dealt " << Hit(E, P) << " damage to " << P.get_Name() << endl; cout << endl;
				if (P.get_Hp() <= 0) {
					cout << P.get_Name() << " is dead" << endl << endl << "Going back to camp" << endl;
					return P;
				}
			}
			else {
				cout << "Victory!!!" << endl << E.get_Name() << " is dead" << endl;
				P.set_Exp(P.get_Exp() + 2 * E.get_Level());
				P.set_Gold(P.get_Gold() + 2 * E.get_Level());
				cout << P.get_Name() << " Got " << 2 * E.get_Level() << " Exp" << " and " << 2 * E.get_Level() << " Gold" << endl;
			}
			break;

		case 2:
			cout << P.get_Name() << " has Guarded" << endl;
			cout << E.get_Name() << " attacked and dealt " << 0 << " damage to " << P.get_Name() << endl; cout << endl;
			break;

		default:
			cout << "Illegal input" << endl;
		}
	}
	return P;
}

Player E_Camp(Player P) {
	int flag;
	while (1) {
		system("cls");
		cout << "Back to Camp, " << "What would you like to do?" << endl << endl;
		cout << "1.Continue story" << endl << "2.Store" << endl << "3.Craft" << endl << "4.Explore" << endl << "5.Stats and Inventory" <<endl << "6.Quit" << endl;
		cin >> flag;
		switch (flag) {
		case 1:
			return P;
		case 2:
			//P=P.Store();
			break;
		case 3:
			//P=P.Craft();
			break;
		case 4:
			P=E_Random(P);
			break;
		case 5:
			P.get_Stats();
		case 6:
			return P;
		default:
			cout << "Illegal input" << endl;
		}
	}
}

Player E_Random(Player P) {
	switch (rand() % 3) {
	case 0:
		E_Goblin(P);
		break;
	case 1:
		E_Wolf(P);
		break;
	case 2:
		E_Gaint(P);
		break;
	default:
		return P;
	}
	return P;
}
