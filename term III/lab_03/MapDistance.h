#pragma once

#include "MapPoint.h"

class MapDistance{
friend class MapPoint;

	double r_long;
	double r_lati;
	MapDistance * wsk;

public:
	void print();


};