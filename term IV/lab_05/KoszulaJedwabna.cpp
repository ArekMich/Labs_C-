#include <iostream>
#include "Ubranie.h"
#include "Koszule.h"
#include "KoszulaJedwabna.h"
#include "ZelazkoZelmer.h"
#include "ZelazkoTefal.h"

using namespace std;

 KoszulaJedwabna:: KoszulaJedwabna(const float k_cena):  Koszule(k_cena){
	n_ubrania="Koszula jedwabna";
}


void KoszulaJedwabna::WypiszWlasciwosci(){
	
	cout<<n_ubrania<<" cena: "<<cena;
	wyswietl_stan();

}
// Koszula bawelniana cena: 200.

void  KoszulaJedwabna::Prasuj(const ZelazkoZelmer & zelazko){
	cout<<"Prasuje "<<n_ubrania<<" zelazkiem o temp. "<<zelazko.temp<<"."<<endl;
	pogniecione=0;
	wyprasowane=1;
}

// Prasuje Koszula bawelniana zelazkiem o temp. 3.

void KoszulaJedwabna::PrasujRekawy(const ZelazkoZelmer & zelazko){
	cout<<"Prasuje rekawy "<<n_ubrania<<" zelazkiem o temp."<<zelazko.temp<<"."<<endl;
	pogniecione_rekawy=0;
	wyprasowane_rekawy=1;
}

 // Prasuje rekawy Koszula jedwabna zelazkiem o temp.3.

void KoszulaJedwabna::Pogniec(){
	pogniecione=1;
	wyprasowane=0;
	prasowane=0;
	gniecone=1;
}

void KoszulaJedwabna::Prasuj(const ZelazkoTefal & zelazko){
	cout<<"Prasuje "<<n_ubrania<<" zelazkiem o temp. "<<zelazko.temp<<"."<<endl;
	pogniecione=0;
	wyprasowane=1;
}