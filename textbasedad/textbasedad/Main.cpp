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
	int attack;
};

int main()
{
	int m[5][5] = { { 00, 10, 20, 30, 40 },
				   { 01, 11, 21, 31, 41 },
				   { 02, 12, 22, 32, 42 },
				   { 03, 13, 23, 33, 43 },
				   { 04, 14, 24, 34, 44 } };

	Player regi;
	Enemy mon1;
	Enemy mon2;
	Enemy mon3;

	int x, y;
	for (x = 0; x < 5; x++)
	{
		for (y = 0; y < 5; y++)
		{
			m[x][y] = x, y;
			x++, y++;
		}
	}

	regi.location = m[2][4];
	regi.health = 200;
	regi.key = false;

	mon1.location = m[3][4];
	mon1.attack = 50;

	mon2.location = m[0][2];
	mon2.attack = 70;

	mon3.location = m[3][0];
	mon3.attack = 100;



	MyString yourmove;
	char word[255];
	yourmove = MyString(word);
	yourmove.ConvertLow();

	while (yourmove.Compare("q") == false)
	{
		system("cls");
		cin >> word;
		if (yourmove.Compare("north") == true)
		{
			y--;
			regi.location;
		}
		if (yourmove.Compare("south") == true)
		{
			y++;
			regi.location;
		}
		if (yourmove.Compare("east") == true)
		{
			x++;
			regi.location;
		}
		if (yourmove.Compare("west") == true)
		{
			x--;
			regi.location;
		}

		if (yourmove.Compare("q") == true)
		{
			break;
		}




		if (regi.location = mon1.location)
		{
			int newhealth = regi.health -= mon1.attack;
			cout << "this room contains an enemy you have been attacked now have " << newhealth << " health remaining" << endl;
		}
		else if (regi.location = mon2.location)
		{
			int ehealth = regi.health -= mon2.attack;
			cout << ehealth;
		}
		else if (regi.location = mon3.location)
		{
			int whealth = regi.health -= mon3.attack;
			cout << whealth;
		}
		if (regi.health <= 0)
		{
			cout << "YOU DIED GAME OVER";
			break;
		}





		system("pause");
	}
}