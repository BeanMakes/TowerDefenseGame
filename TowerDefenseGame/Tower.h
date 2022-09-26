#ifndef TOWER_H
#define TOWER_H

#include "ObjectOnBoard.h"
class Tower : public ObjectOnBoard
{
protected:
	float damage;
	float attackSpeed;
	float range;
public:
	Tower(float x, float y, float d, float ds,float r, const std::string& t = "Tower") :
		ObjectOnBoard(x,y,t), damage(d), attackSpeed(ds), range(r) {}

	void printPos() const { std::cout << "Pos: " << posx << " " << posy << std::endl };
	
	void print() const { std::cout << "I am object" << std::endl; };

	virtual float dealDamage() const = 0;
	virtual float getRange() const = 0;
	
	

};
#endif // !TOWER_H
