//file Facility.h
#ifndef FACILITY_H
#define FACILITY_H
#include "Indices.h"

class Facility {
public:
	Facility();
	Facility(Indices I);
	Facility(Cell& C);
	~Facility();
	Facility& operator= (Facility& F);
	//void GetKoordinat();
	bool IsRoad();
	bool IsPark();
	bool IsRestaurant();
	virtual void render(); //iya???
protected;
	int FType; //0 = Road, 1 = Park, 2 = Restaurant
};

#endif
