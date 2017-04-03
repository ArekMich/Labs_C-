#ifndef MapPoint_h
#define MapPoint_h

#include <cmath>
#include "MapDistance.h"

class MapDistance;

class MapPoint{
private:

	double ilong;
	double ilati;
	int Id;

	static int id;
	static MapDistance * wski;

public:

	static int next_free_id;

	void print();
	void set_latitude(const double lati);
	void set_longitude(const double longg);
	void assign_id();
	void set_coordinates (const double lati, const double longg);
	MapDistance&  distance(const MapPoint & obj);
	MapPoint  closest( MapPoint & obj_1, MapPoint & obj_2);


};	




#endif 