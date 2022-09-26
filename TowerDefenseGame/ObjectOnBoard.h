#ifndef OBJECTONBOARD_H
#define OBJECTONBOARD_H

#include <iostream>

class ObjectOnBoard
{
protected:
	std::string type;

	float posx;
	float posy;


public:
	

	ObjectOnBoard(float x, float y, const std::string& t = "ObjectOnBoard") : type(t), posx(x), posy(y) {}

	void print() const { std::cout << "I am object" << std::endl; }

	virtual void printPos() const {std::cout << "Pos: " << posx << " " << posy << std::endl }

};

#endif