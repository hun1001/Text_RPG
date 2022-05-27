#include "DuelManager.h"

DuelManager::DuelManager()
{
}

DuelManager::~DuelManager()
{
}

void DuelManager::StartDuel(Entity* p1, Entity* p2)
{
	while (p1->GetHp()>=0&&p2->GetHp()>=0)
	{
		cout << "Player : hp " << p1->GetHp() << " def" << p1->GetDef() << " atk" << p1->GetAtk() << endl;
		cout << "Enemy : hp " << p2->GetHp() << " def" << p2->GetDef() << " atk" << p2->GetAtk() << endl;
		cout << endl;
		p1->Attack(p2);
		p2->Attack(p1);
	}
	cout << "Player : hp " << p1->GetHp() << " def" << p1->GetDef() << " atk" << p1->GetAtk() << endl;
	cout << "Enemy : hp " << p2->GetHp() << " def" << p2->GetDef() << " atk" << p2->GetAtk() << endl;
	cout << endl;
	
	if (p1->GetHp() <= 0)
	{
		cout << "Player 2 win" << endl;
	}
	else
	{
		cout << "Player 1 win" << endl;
	}
}
