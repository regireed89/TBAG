#include <iostream>
#include"String Class.h"


using namespace std;



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


int main()

	{
		int m[5][5];
		Player regi;
		Enemy mon1;
		Enemy mon2;
		Enemy mon3;
		
		int x, y;
		for (x = 0; x < 4; x++)
		{
			for (y = 0; y < 4; y++)
			{
				regi.location = m[x][y];
			}
		}
		{
			regi.location = m[2][4];
			regi.health = 200;

			mon1.location = m[3][4];
			mon1.attack = 50;

			mon2.location = m[3][3];
			mon2.attack = 70;

			mon3.location = m[3][0];
			mon3.attack = 100;

		}
			MyString yourmove;
			char word[255];
			
			yourmove = MyString(word);
			yourmove.ConvertLow();
			
				cin >> word;

				
					if (yourmove.Compare("north") == true)
					{
						regi.location;
						y--;
					}
					if (yourmove.Compare("south") == true)
					{
						regi.location;
						y++;
					}
					if (yourmove.Compare("east") == true)
					{
						regi.location;
						x++;
					}
					if (yourmove.Compare("west") == true)
					{
						regi.location;
						x--;
					}
					else
					{
						cout << "didnt type the correct thing YOU LOSE";	
					}
				
				
					if (regi.location = mon1.location)
					{
						int newhealth = regi.health - mon1.attack;
						cout << newhealth;
					}
					if (regi.location = mon2.location)
					{
						int newhealth = regi.health - mon2.attack;
						cout << newhealth;
					}
					if (regi.location = mon3.location)
					{
						int newhealth = regi.health - mon3.attack;
						cout << newhealth;
					}
				



			
	system("pause");
	system("cls");
}