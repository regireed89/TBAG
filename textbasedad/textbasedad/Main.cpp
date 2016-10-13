#include <iostream>
#include"String Class.h"
using namespace std;




struct Player
{
	int location;
	int health;
	bool key;
};

struct Enemy
{
	int location;
	int damage;
};



int main()
{
	const int x = 5;
	const int y = 5;
	int map[x][y] = { { 00, 01, 02, 03, 04 },
				   { 10, 11, 12, 13, 14 },
				   { 20, 21, 22, 23, 24 },
				   { 30, 31, 32, 33, 34 },
				   { 40, 41, 42, 43, 44 } };

	Player regi;
	Enemy mon1;
	Enemy mon2;
	Enemy mon3;
	Enemy trap1;
	Enemy trap2;
	Enemy trap3;

	regi.location = map[4][2];
	regi.health = 200;
	regi.key = false;

	mon1.location = map[4][3];
	mon1.damage = 50;

	mon2.location = map[2][0];
	mon2.damage = 70;

	mon3.location = map[0][3];
	mon3.damage = 100;

	trap1.location = map[3][1];
	trap1.damage = 20;

	trap2.location = map[2][4];
	trap2.damage = 40;

	trap3.location = map[0][0];
	trap3.damage = 60;


		MyString yourmove;
		char word[255];
		yourmove.ConvertLow();
		
		cout << "WELCOE TO GET OUT A TEXT BASED ADVENTURE GAME WHERE IS THE GOAL IS TO FIND THE EXIT" << endl;
		cout << "BUT BEFORE YOU CAN DO THAT YOU MUST FIND THE KEY TO BE ABLE TO ESCAPE " << endl;
		cout << "THERE ARE MULTIPLE ENEMYS AND TRAPS THAT IF YOU RUN INTO THEY WILL HURT YOU" << endl;
		cout << "YOU CAN MOVE AROUND BY TYPING NORTH, EAST, SOUTH, WEST OR Q TO QUIT THE GAME" << endl;
		cout << "IF YOU GO OUT SIDE OF THE MAP YOU AUTOMATICALLY LOSE" << endl;
		cout << "YOU MUST KNOW THAT IF YOUR HEALTH REACHES 0 ITS GAME OVER" << endl;
		system("pause");

		while (yourmove.Compare("q") == false)
		{

			system("cls");
			cin >> word;



			yourmove = MyString(word);
			if (yourmove.Compare("north") == true)
			{
				regi.location = regi.location - 10;
			}
			if (yourmove.Compare("south") == true)
			{
				regi.location = regi.location + 10;
			}
			if (yourmove.Compare("east") == true)
			{
				regi.location = regi.location + 1;
			}
			if (yourmove.Compare("west") == true)
			{
				regi.location = regi.location - 1;
			}
			else
			{

			}
			


			if (regi.location == mon1.location)
			{
				int ahealth = regi.health -= mon1.damage;
				cout << "this room contains an enemy you have been attacked now have " << ahealth << " health remaining" << endl;
			}
			else if (regi.location == mon2.location)
			{
				int bhealth = regi.health -= mon2.damage;
				cout << "this room contains an enemy you hve been attacked and now have " << bhealth << " health remaining" << endl;
			}
			else if (regi.location == mon3.location)
			{
				int chealth = regi.health -= mon3.damage;
				cout << "this room contains an enemy you hve been attacked and now have " << chealth << " health remaining" << endl;
			}
			else if (regi.location == trap1.location)
			{
				int atrap = regi.health -= trap1.damage;
				cout << "you walked into a trap and now have " << atrap << " health remaining" << endl;
			}
			else if (regi.location == trap2.location)
			{
				int btrap = regi.health -= trap2.damage;
				cout << "you walked into a trap and now have " << btrap << " health remaining" << endl;
			}
			else if (regi.location == trap3.location)
			{
				int ctrap = regi.health -= trap3.damage;
				cout << "you walked into a trap and now have " << ctrap << " health remaining" << endl;
			}
			else if (regi.location == map[1][4])
			{
				cout << "YOU'VE FOUND THE KEY NOW FIND THE EXIT" << endl;
				regi.key = true;
			}
			else if (regi.key == true && regi.location == map[0][1])
			{
				cout << "YOUVE FOUND THE EXIT AND HAVE WON THE GAME";

			}
			else if (regi.key == false && regi.location == map[0][1])
			{
				cout << "YOUVE FOUND THE EXIT BUT CANNOT LEAVE WITHOUT THE KEY" << endl;
			}
			else
			{
				cout << "either this room is empty or you typed the wrong command" << endl;
			}
			

			

			if (regi.location < 0 || regi.location> 4 && regi.location< 10 || regi.location> 14 && regi.location < 20 || regi.location> 24 && regi.location< 30 || regi.location> 34 && regi.location< 40 || regi.location> 44)
			{
				cout << "YOU WENT OUT OF BOUNDS YOU LOSE" << endl;
				break;
			}



			if (regi.health <= 0)
			{
				cout << "YOU DIED GAME OVER" << endl;
				break;
			}
			

			system("pause");
		}
	
		system("pause");
	return 0;
}
