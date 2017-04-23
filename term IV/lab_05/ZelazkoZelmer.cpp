#include <iostream>
#include "ZelazkoZelmer.h"
#include "Zelazko.h"

using namespace std;

ZelazkoZelmer::ZelazkoZelmer(const float c): Zelazko(c) {
	nazwa="Zelmer";
	temp=0;
}

void ZelazkoZelmer::UstawTemperature(int t){
	temp=t;
}

void ZelazkoZelmer::WypiszWlasciwosci(){
	cout<<nazwa<<" cena: "<<cena<<". temperatura: "<<temp<<endl;
}

// Zelmer cena: 135. temperatura: 3
