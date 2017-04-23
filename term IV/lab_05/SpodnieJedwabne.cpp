#include <iostream>
#include "Ubranie.h"
#include "Spodnie.h"
#include "SpodnieJedwabne.h"
#include "ZelazkoZelmer.h"
#include "ZelazkoTefal.h"

using namespace std;

SpodnieJedwabne::SpodnieJedwabne(const float k_cena):  Spodnie(k_cena){
	n_ubrania="Spodnie jedwabne";
}


void SpodnieJedwabne::WypiszWlasciwosci(){
	
	cout<<n_ubrania<<" cena: "<<cena;
	wyswietl_stan();

}
// Koszula bawelniana cena: 200.

void SpodnieJedwabne::Prasuj(const ZelazkoZelmer & zelazko){
	cout<<"Prasuje "<<n_ubrania<<" zelazkiem o temp. "<<zelazko.temp<<"."<<endl;
	pogniecione=0;
	wyprasowane=1;
}

// Prasuje Koszula bawelniana zelazkiem o temp. 3.

void SpodnieJedwabne::PrasujNogawki(const ZelazkoZelmer & zelazko){
	cout<<"Prasuje nogawki "<<n_ubrania<<" zelazkiem o temp."<<zelazko.temp<<"."<<endl;
	pogniecione_nogawki=0;
	wyprasowane_nogawki=1;
}

 // Prasuje nogawki Koszula jedwabna zelazkiem o temp.3.

void SpodnieJedwabne::Pogniec(){
	pogniecione=1;
	wyprasowane=0;
	prasowane=0;
	gniecone=1;
}

void SpodnieJedwabne::Prasuj(const ZelazkoTefal & zelazko){

	cout<<"Prasuje "<<n_ubrania<<" zelazkiem o temp. "<<zelazko.temp<<"."<<endl;
	pogniecione=0;
	wyprasowane=1;
}

//Prasuje Koszula bawelniana zelazkiem o temp. 1.
//Koszula bawelniana cena: 200. Stan ubrania: wyprasowane.

