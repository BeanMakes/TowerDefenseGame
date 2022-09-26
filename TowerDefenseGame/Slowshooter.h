#ifndef SLOWSHOOTER_H
#define SLOWSHOOTER_H

#include "Tower.h"

class SlowShooter : public Tower
{
private:

public:
	SlowShooter(float x, float y, float d, float ds, float r, const std::string& t = "SlowShooter") :
		Tower(x,y,d,ds,r,t){}
	
	float dealDamage() const override ;
	float getRange() const override;
	void print() const;
	void printPos() const;


};
#endif // !SLOWSHOOTER_H
