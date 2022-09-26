#include "Slowshooter.h"
#include "Tower.h"
#include "ObjectOnBoard.h"

float SlowShooter::dealDamage() const
{
	return damage;
}

float SlowShooter::getRange() const
{
	return range;
}

void SlowShooter::printPos() const
{
	std::cout << posx << " " << posy << std::endl;
}

void SlowShooter::print() const
{
	std::cout << t << std::endl;
}