#ifndef CARNIVORA_H
#define CARNIVORA_H
#include "Animals.h"
#include "Indices.h"

class Carnivora: public Animals{
//method
public:	
	//ctor
	Carnivora(bool kejinakan, int x, int y);	
	//bergerak sesuai constrain habitat
	//void move(bool water_habitat, bool land_habitat, bool air_habitat, point animal_koordinat, map);

	
};
#endif
