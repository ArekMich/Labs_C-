// ten plik MOZNA modyfikowc

#include <iostream>
#include "Main.h"

using namespace std;

PilaSpalinowa::PilaSpalinowa(std::string iNazwa, std::string iZast, float poz_olej):  Narzedzie(iNazwa, iZast), Spalinowy(), poziom_oleju(poz_olej){}

void PilaSpalinowa::Wypisz() const {
    std::cout << "Pila spalinowa marki " <<nazwa<< ".\n";
    WypiszZastosowanie();
    WypiszPoziomOleju();
}

void PilaSpalinowa::WypiszZastosowanie() const{
	cout<<"Tego narzedzia uzywa sie do "<<zastosowanie<<"."<<endl;
}


void PilaSpalinowa::WypiszPoziomOleju() const{
	cout<<"Poziom oleju wynosi "<<poziom_oleju<<"."<<endl;
}