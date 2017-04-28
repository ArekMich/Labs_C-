#include <iostream>
#include "Main.h"

using namespace std;

StatekSilnikowy::StatekSilnikowy(const float masaCalkowita): Statek(masaCalkowita){}

void StatekSilnikowy::UstawPoziomOleju (float poziom){
	m_poziomOleju=poziom;
}


void StatekSilnikowy::WypiszPoziomOleju() const{
	cout<<"Poziom oleju wynosi "<<m_poziomOleju<<"."<<endl;
}
void StatekSilnikowy::WypiszInformacje () const{
	cout<<"Masa calkowita tego statku wynosi "<<m_masa<<". \n";
	WypiszPoziomOleju();
}