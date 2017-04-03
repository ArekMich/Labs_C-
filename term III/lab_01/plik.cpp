#include <iostream>
#include "lab01.h"

using namespace std;

static int wywolanie=1;

float * Wsk;

ciag InicjalizujCiagGeometryczny (const rozmiarCiagu size,const float ilr){

	float * tab=new float[size];

	tab[0]=1;

	for(int i=1; i<size; i++){
		tab[i]=tab[i-1] * ilr;
	}
	Wsk=tab;
	return tab;
}

void UsunCiagi(){
	if(Wsk)
		delete Wsk;

}

void Wypisz(const ciag tab,const rozmiarCiagu size){
	if(wywolanie==1)
		cout<<"wynik dzialania programu:"<<endl;

	wywolanie=0;

	cout<<"(";
	for(int i=0; i<size;i++){
		if(i!=(size-1))
			cout<<tab[i]<<", ";
		else
			cout<<tab[i]<<")"<<endl;
	}
}


void Suma(const ciag geom,const rozmiarCiagu rozmiar){
	float wart=0;
	
	cout<<"suma: ";
	for(int i=0; i<rozmiar;i++)
		wart+=geom[i];
	cout<<wart<<endl;
}

void Iloczyn(const ciag geom,const rozmiarCiagu rozmiar){
	float wart=1;
	
	cout<<"iloczyn: ";
	for(int i=0; i<rozmiar;i++)
		wart*=geom[i];
	cout<<wart<<endl;

}
void Max(const ciag geom,const rozmiarCiagu rozmiar){
	float m=geom[0];
	
	cout<<"max: ";
	for(int i=1; i<rozmiar;i++)
		if(m<geom[i])
			m=geom[i];
	cout<<m<<endl;

}
void Min(const ciag geom,const rozmiarCiagu rozmiar){
	float m=geom[0];
	
	cout<<"min: ";
	for(int i=1; i<rozmiar;i++)
		if(m>geom[i])
			m=geom[i];
	cout<<m<<endl;

}

void WykonajIWypisz ( operacja fun,const ciag geometryczny1,const rozmiarCiagu rozmiar){
	fun(geometryczny1,rozmiar);
	
}
