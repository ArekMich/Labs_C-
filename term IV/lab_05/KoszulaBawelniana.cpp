#include <iostream>
#include "Ubranie.h"
#include "Koszule.h"
#include "KoszulaBawelniana.h"
#include "ZelazkoZelmer.h"
#include "ZelazkoTefal.h"

using namespace std;

KoszulaBawelniana::KoszulaBawelniana(const float k_cena):  Koszule(k_cena){
	n_ubrania="Koszula bawelniana";
}


void KoszulaBawelniana::WypiszWlasciwosci(){
	
	cout<<n_ubrania<<" cena: "<<cena;
	wyswietl_stan();

}
// Koszula bawelniana cena: 200.

void KoszulaBawelniana::Prasuj(const ZelazkoZelmer & zelazko){
	cout<<"Prasuje "<<n_ubrania<<" zelazkiem o temp. "<<zelazko.temp<<"."<<endl;
	pogniecione=0;
	wyprasowane=1;
}

// Prasuje Koszula bawelniana zelazkiem o temp. 3.

void KoszulaBawelniana::Pogniec(){
	pogniecione=1;
	wyprasowane=0;
	prasowane=0;
	gniecone=1;
}

void KoszulaBawelniana::Prasuj(const ZelazkoTefal & zelazko){

	cout<<"Prasuje "<<n_ubrania<<" zelazkiem o temp. "<<zelazko.temp<<"."<<endl;
	pogniecione=0;
	wyprasowane=1;
}