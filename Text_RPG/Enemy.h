#pragma once

#include "Entity.h"

class Enemy : public Entity
{
public:
	Enemy();
	Enemy(int hp, int mp, int atk, int def);
	~Enemy();

public:
	virtual void IsDead();
};

