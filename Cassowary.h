#ifndef CASSOWARY_H
#define CASSOWARY_H
#include "Casuariformes.h"
#include "Animals.h"

class Cassowary: public Casuariformes {
//method
public:
	//ctor with param
	Cassowary(int bb);
	//destructor
	//polymorphism interaksi
	void interact();
};
#endif
