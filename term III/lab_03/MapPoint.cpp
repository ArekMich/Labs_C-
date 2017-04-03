#include <iostream>
#include "MapPoint.h"
#include <cmath>

using namespace std;

int MapPoint::id=0;

int MapPoint::next_free_id;

MapDistance * MapPoint::wski;

void MapPoint::print(){

	std::cout<<"Point with ID="<<Id<<": ("<<ilong<<", "<<ilati<<")"<<std::endl;
}

//Point with ID=1 : (19.9383, 50.0614)

void MapPoint::set_latitude(const double lati){
	ilati=lati;
}
	
void MapPoint::set_longitude(const double longg){
	ilong=longg;
}

void MapPoint::assign_id(){
	id++;
	Id=id;
	next_free_id=id+1;
}

void MapPoint::set_coordinates (const double lati, const double longg){
	ilong=lati;
	ilati=longg;
}

MapDistance&  MapPoint::distance(const MapPoint & obj){
	
	MapDistance * inew=new MapDistance;
	inew->r_long=ilong-obj.ilong;
	inew->r_lati=ilati-obj.ilati;
	inew->wsk=inew;
	wski=inew;

return *inew;
}

MapPoint  MapPoint::closest( MapPoint & obj_1, MapPoint & obj_2){
	
	MapPoint inew;

	wski->r_long=obj_1.ilong-obj_2.ilong;
	wski->r_lati=obj_1.ilati-obj_2.ilati;

	inew.ilong=sqrt(pow(wski->r_long,2)); 
	inew.ilati=sqrt(pow(wski->r_lati,2));

	Id=3;
	delete wski;

return inew;	
}
