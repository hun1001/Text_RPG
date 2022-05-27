#include "Enemy.h"

Enemy::Enemy() :Entity()
{
}

Enemy::Enemy(int hp, int mp, int atk, int def) :Entity(hp, mp, atk, def)
{
}

Enemy::~Enemy()
{
}

void Enemy::IsDead()
{
	if (this->GetHp() <= 0)
	{
		delete this;
	}
}
