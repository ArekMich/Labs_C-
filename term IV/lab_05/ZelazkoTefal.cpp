#include <iostream>
#include "ZelazkoTefal.h"
#include "Zelazko.h"

using namespace std;

ZelazkoTefal::ZelazkoTefal(const float c): Zelazko(c) {
	nazwa="Tefal";
	temp=0;
}

void ZelazkoTefal::UstawTemperature(int t){
	temp=t;
}

void ZelazkoTefal::WypiszWlasciwosci(){
	cout<<nazwa<<" cena: "<<cena<<". temperatura: "<<temp<<endl;
}