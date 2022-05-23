#pragma once
#include "Entity.h"
#include <string>

using namespace std;

class Player : public Entity
{
public:
	Player();
	Player(int hp, int mp, int atk, int def);
	Player(int hp, int mp, int atk, int def, string name);
	Player(int hp, int mp, int atk, int def, string name, string job);
	virtual ~Player();
	
public:
	virtual void Attack(Entity* target);

protected:
	string m_name;
	string m_job;
	
public:
	void SetName(string name);
	void SetJob(string job);
	
public:
	string GetName();
	string GetJob();
};

