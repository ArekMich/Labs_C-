// ten plik MOZNA modyfikowc

#include <iostream>
#include "Main.h"

using namespace std;

Rower::Rower(std::string nazwa_poj,float pred ,std::string zrodlo_nap): Pojazd(nazwa_poj, pred),Reczny(), zrodlo_napedu(zrodlo_nap){}

void Rower::Wypisz() const {
    std::cout << "Wypisuje rower " << nazwa << ".\n";
    WypiszPredkoscMaksymalna();
    WypiszZrodloNapedu();
}

void Rower::WypiszPredkoscMaksymalna() const{
	cout<<"Predkosc maksymalna tego pojazdu wynosi "<<max_predkosc<<"  km/h."<<endl;
}

void Rower::WypiszZrodloNapedu() const{
	cout<<"Do napedzenia tego urzadzenia uzywa sie "<<zrodlo_napedu<<"."<<endl;
}