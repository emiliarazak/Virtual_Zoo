#ifndef WOLF_H
#define WOLF_H
#include "Carnivora.h"
#include "Animals.h"

class Wolf:public Carnivora{
//method
public:
	//ctor with param
	Wolf(int bb, int x, int y);
	//destructor
	//polymorphism interaksi
	void interact();
	char Render();
};
#endif
