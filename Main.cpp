
#include "Player.h"
#include "Enemies.h"
#include "Encounters.h"
#include <iostream>
#include <string>


using namespace std;


int main()
{
	string Name;
	cout << "Hello Welcome to [Game_Name]" << endl;
	cout << "What is your name?" << endl;
	cin >> Name;
	Player p1(Name);

	/*/ Chapter 1:
	std::cin.ignore();
	cout << "Unknown Voice: Your'e finally awake..." << endl;
	std::cin.ignore();
	cout << p1.get_Name() << ": What??? Who is this?" << endl;
	std::cin.ignore();
	cout << "Unknown Voice: You will know soon enough..." << endl;
	std::cin.ignore();
	cout << "(You hear the Unknown Voice fades away...)" << endl;
	std::cin.ignore();
	cout << p1.get_Name() << ":Where am I? What is this place?" << endl;
	std::cin.ignore();
	cout << "(Suddenly you hear a strange sound coming from the bushes behind you)" << endl;
	std::cin.ignore();
	cout << "As you turn around you see a Goblin is about to attack you!" << endl;
	std::cin.ignore();
	cout << "It's seems you have no choice but to fight it!" << endl;
	std::cin.ignore();
/*/	
	// Encounter:
	p1=E_Goblin(p1);
	p1=E_Camp(p1);






}
