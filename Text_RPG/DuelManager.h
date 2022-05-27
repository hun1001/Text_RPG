#pragma once

#include <iostream>
#include "Entity.h"

using namespace std;

class DuelManager
{
public:
	DuelManager();
	~DuelManager();
	
public:
	void StartDuel(Entity* p1, Entity* p2);
};

