#pragma once

struct MapPoint{
	
	char * name;
	double ilong;
	double ilati;
	MapPoint * wsk;

};

MapPoint & construct(const char* iName,const double iLatitude,const double iLongitude);
MapPoint & inTheMiddle( MapPoint & city,  const MapPoint& iName, const char * words);
void print(const MapPoint & city);
void movePoint( MapPoint & city,const  double latitudeShift,const double longitudeShift);
void clear(MapPoint & city);
void clear(MapPoint & city_1,MapPoint & city_2);
