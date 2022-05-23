#include "Entity.h"

Entity::Entity() : m_hp(Default_HP), m_mp(Default_MP), m_atk(Default_ATK), m_def(Default_DEF)
{
}

Entity::Entity(int hp, int mp, int atk, int def) : m_hp(hp), m_mp(mp), m_atk(atk), m_def(def)
{
}

Entity::~Entity()
{
}

int Entity::GetHp()
{
	return m_hp;
}

int Entity::GetDef()
{
	return m_def;
}

int Entity::GetAtk()
{
	return m_atk;
}

void Entity::SetHp(int hp)
{
	m_hp = hp;
}

void Entity::SetDef(int def)
{
	m_def = def;
}

void Entity::SetAtk(int atk)
{
	m_atk = atk;
}

void Entity::AddHp(int hp)
{
	m_hp += hp;
}

void Entity::AddDef(int def)
{
	m_def += def;
}

void Entity::AddAtk(int atk)
{
	m_atk += atk;
}
