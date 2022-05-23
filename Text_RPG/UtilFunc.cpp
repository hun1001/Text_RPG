#include "UtilFunc.h"

int DamageCalculator(int atk, int def)
{
	return atk * (100 / (100 + def));
}