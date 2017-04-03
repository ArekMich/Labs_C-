#include <iostream>
#include "Prezent.h"
#include "Worek.h"

using namespace std;
extern bool flag;
int ile_elem=0;
Prezent * Prezent::tmp_ostatni;

Prezent::Prezent(float wartosc=0): cena(wartosc){
    if(ile_elem==0){
        tmp_ostatni=this;
        poprzedni=NULL;
        ile_elem++;
    }else{
        poprzedni=tmp_ostatni;
        tmp_ostatni=this;
        ile_elem++;
    }
}

Prezent::Prezent(const Prezent & obj){
    cena=obj.cena;
}

Prezent& Prezent::operator=(Prezent & obj){
    cena=obj.cena;
    return (*this);
}

Prezent::~Prezent(){
    ile_elem--;
}

void Prezent::Wypisz(){
    cout<<"Ten prezent kosztuje: "<<cena<<endl;
}

void Prezent::NapiszIleJestPrezentow(){
    cout<<"Aktualna liczba prezentow: "<<ile_elem<<endl;
}
