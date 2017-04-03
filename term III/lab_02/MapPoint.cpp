#include <iostream>
#include <string.h>
#include "MapPoint.h"
#include <new>


using namespace std;

MapPoint & inTheMiddle( MapPoint & city,  const MapPoint& iname, const char * words){

	MapPoint * obj=new MapPoint;
	obj->wsk=obj;

	int size=strlen(words)+1;
	MapPoint & rObj=*obj;

		rObj.name= new char[size];	
		strcpy(rObj.name,words);

		rObj.ilong=(city.ilong+iname.ilong)/2;
		rObj.ilati=(city.ilati+iname.ilati)/2;

return rObj;		
}

MapPoint & construct(const char * iName,const double iLatitude,const double iLongitude){

	MapPoint * obj=new MapPoint;
	obj->wsk=obj;
														//pamietac o dealokacji pamieci !!!
	int size=strlen(iName)+1;
	MapPoint & rObj=*obj;

		rObj.name= new char[size];										//pamietac o dealokacji pamieci !!!
		strcpy(rObj.name,iName);

		rObj.ilong=iLongitude;
		rObj.ilati= iLatitude;

	return rObj;
}

void print(const MapPoint & city){

	cout<<"Position of "<<city.name<<". Latitude: "<<city.ilati<<". Longitude: "<<city.ilong<<endl;

}

//Position of Krakow. Latitude: 50.0614. Longitude: 19.9383

void movePoint( MapPoint & city,const double latitudeShift,const double longitudeShift){

		city.ilong+=longitudeShift;
		city.ilati+=latitudeShift;

}


void clear(MapPoint & city){
	
	//MapPoint * wsk=  &city;

	if(city.name != NULL ){
		delete [] city.name;
		cout<<"Dealokacja tablicy charów 1"<<endl;
	}
	
	delete city.wsk;
	cout<<"Dealokacja 1"<<endl;
}


void clear(MapPoint & city_1,MapPoint & city_2){
	
	// MapPoint * wsk_1=  &city_1;
	// MapPoint * wsk_2=  &city_2;

	if(city_1.name != NULL || city_2.name != NULL ){
		delete [] city_1.name;
		delete [] city_2.name;

		cout<<"Dealokacja tablicy charów 2"<<endl;
	}
	
	delete city_1.wsk;
	delete city_2.wsk;
	// delete wsk_1;
	// delete wsk_2;
	cout<<"Dealokacja 2"<<endl;
}
