#include "Player.h"

Player::Player() : Entity()
{
}

Player::Player(int hp, int mp, int atk, int def) : Entity(hp, mp, atk, def)
{
}

Player::~Player()
{
}

void Player::Attack(Entity* target)
{
	target->AddHp(-(this->GetAtk()));
}
