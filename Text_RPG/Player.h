#pragma once
#include "Entity.h"

class Player : public Entity
{
public:
	Player();
	Player(int hp, int mp, int atk, int def);
	virtual ~Player();
	
public:
	virtual void Attack(Entity* target);
};

