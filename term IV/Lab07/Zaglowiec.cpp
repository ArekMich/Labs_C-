#include <iostream>
#include "Main.h"

using namespace std;

Zaglowiec::Zaglowiec(const float masa):  Statek(masa){}

void Zaglowiec::ZagleStaw(){
	m_zaglePostawione= true;
}

void Zaglowiec::ZaglePrecz(){
	m_zaglePostawione= false;
}

void Zaglowiec::WypiszStanZagli () const{ (m_zaglePostawione)?cout<<"zagle: postawione"<<endl: cout<<"zagle: zlozone"<<endl;}

void Zaglowiec::WypiszInformacje () const{ 
	cout<<"Masa calkowita tego statku wynosi "<<m_masa<<". \n";
	WypiszStanZagli();
}

void WypiszWlasciwosci(const Statek* statek){
	const Zaglowiec * zaglowiec = dynamic_cast<const Zaglowiec*>(statek);
	if(zaglowiec){
		cout<<"To jest zaglowiec."<<endl;
		zaglowiec->WypiszStanZagli();
	}
	const StatekSilnikowy * statek_silnikowy = dynamic_cast<const StatekSilnikowy*>(statek);
	if(statek_silnikowy){
		cout<<"To jest statek silnikowy."<<endl;
		statek_silnikowy->WypiszPoziomOleju();
	} 
}
