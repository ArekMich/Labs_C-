#include <iostream>
#include "Worek.h"
#include "Prezent.h"

using namespace std;
bool flag=0;
extern int ile_elem;
class Prezent;

Worek::Worek(){}

void Worek::Wloz(Prezent & prezent){
        ostatni=Prezent::tmp_ostatni;
        Prezent * nowy=new Prezent();
        Prezent &tmp=*nowy;
        tmp=prezent;
        tmp.poprzedni=ostatni;
        ostatni=&tmp;
        Prezent::tmp_ostatni=&tmp;
        ile_elem++;
        cout<<"Wlozylem kolejne elementy"<<endl;

}

Prezent& Worek::Wyciagnij(){
    Prezent * tmp=ostatni;
    ostatni=tmp->poprzedni;
    tmp->tmp_ostatni=tmp->poprzedni;
    tmp->poprzedni=NULL;
    ile_elem--;
    return (*tmp);
}








