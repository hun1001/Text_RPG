#include "Player.h"

Player::Player() : Entity()
{
}

Player::Player(int hp, int mp, int atk, int def) : Entity(hp, mp, atk, def)
{
}

Player::Player(int hp, int mp, int atk, int def, string name)
{
}

Player::Player(int hp, int mp, int atk, int def, string name, string job)
{
}

Player::~Player()
{
}

void Player::Attack(Entity* target)
{
	target->AddHp(-(this->GetAtk()));
}

void Player::SetName(string name)
{
}

void Player::SetJob(string job)
{
}

string Player::GetName()
{
	return string();
}

string Player::GetJob()
{
	return string();
}
