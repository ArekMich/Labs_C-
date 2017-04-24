// ten plik MOZNA modyfikowc

#include <iostream>
#include "Main.h"

using namespace std;

Srubokret::Srubokret(std::string iNazwa,std::string iZast, std::string iZrodl): Narzedzie(iNazwa, iZast),Reczny(),zrodlo_napedu(iZrodl){}

void Srubokret::Wypisz() const {
    std::cout << "Srubokret typu " <<nazwa<< ".\n";
    WypiszZastosowanie();
    WypiszZrodloNapedu();
}

void Srubokret::WypiszZastosowanie() const{
	cout<<"Tego narzedzia uzywa sie do "<<zastosowanie<<"."<<endl;
}


void Srubokret::WypiszZrodloNapedu() const{
	cout<<"Do napedzenia tego urzadzenia uzywa sie "<<zrodlo_napedu<<"."<<endl;
}
