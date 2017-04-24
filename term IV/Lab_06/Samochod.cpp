// ten plik MOZNA modyfikowc

#include <iostream>
#include "Samochod.h"
#include "Pojazd.h"

using namespace std;

Samochod::Samochod(std::string nazwa_poj, float pred, float poz_oleju): Pojazd(nazwa_poj, pred),Spalinowy(), poziom_oleju(poz_oleju){}

void Samochod::Wypisz() const {
    std::cout << "To jest " << nazwa << ".\n";
    WypiszPredkoscMaksymalna();
    WypiszPoziomOleju();
}

void Samochod::WypiszPredkoscMaksymalna() const{
	cout<<"Predkosc maksymalna tego pojazdu wynosi "<<max_predkosc<<"  km/h."<<endl;
}
//Predkosc maksymalna tego pojazdu wynosi 286 km/h.

void Samochod::WypiszPoziomOleju() const {
	cout<<"Poziom oleju wynosi "<<poziom_oleju<<"."<<endl;
}