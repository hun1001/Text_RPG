#include <iostream>
#include "Player.h"
#include "Knight.h"
#include "DuelManager.h"
#include "Enemy.h"

using namespace std;

int main() 
{
	int buffer;
	Player* player = new Knight;
	Enemy* enemy = new Enemy;
	DuelManager duelManager;
	
	cout << "1 : Knight, 2 : None" << endl;
	
	cin >> buffer;
	
	switch (buffer)
	{
	case 1:
		player = new Knight;
		break;
	default:
		player = new Player;
		break;
	}

	duelManager.StartDuel(player, enemy);
	
	return 0;
}
