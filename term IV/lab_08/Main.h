#ifndef Main_h
#define Main_h

#include "typ.h"
#include "ObiektMiotajacy.h"
#include <iostream>

void Przetworz1(typ1* wyjatek){
	std::cout<<"Przetworz1 - wyjatek typu 1 o adresie:"<<wyjatek<<std::endl;
	throw wyjatek;
}

void Przetworz1(typ2* wyjatek){
	std::cout<<"Przetworz1 - wyjatek typu 2 o adresie:"<<wyjatek<<std::endl;
	throw wyjatek;
}


#endif