#include <iostream>
#include"String Class.h"


using namespace std;

int main()
{
	struct Player
	{
		int location;
		int health;
	};
	struct Enemy
	{
		int location;
		int attack;
	};

		int m[5][5];
		Player regi;
		Enemy mon1;
		Enemy mon2;
		Enemy mon3;
		int x, y;
		for (x = 0; x < 5; x++)
		{
			for (y = 0; y < 5; y++)
			{
				regi.location = m[x][y];
			}
		}
		regi.location = m[2][4];
		regi.health = 200;
		mon1.location = m[3][4];
		mon1.attack = 50;
		mon2.location = m[0][2];
		mon2.attack = 70;
		mon3.location = m[3][0];
		mon3.attack = 100;
		

		

		MyString yourmove = MyString("north");
	
	if (yourmove.ConvertLow().Compare("north") == true)
	{
		regi.location;
		y--;
	}
	if (yourmove.ConvertLow().Compare("south") == true)
	{
		regi.location;
		y++;
	}
	if (yourmove.ConvertLow().Compare("east") == true)
	{
		regi.location;
		x++;
	}
	if (yourmove.ConvertLow().Compare("west") == true)
	{
		regi.location;
		x--;
	}
	
	
	system("pause");
}