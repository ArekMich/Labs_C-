// ten plik MOZNA modyfikowc
#include <iostream>
#include <string>
#include "Narzedzie.h"
#include "Reczny.h"

class Srubokret: public Narzedzie, public Reczny
{
private:
	std::string zrodlo_napedu;	
public:
  Srubokret(std::string,std::string, std::string);
  void Wypisz() const;
  void WypiszZastosowanie() const;
  void WypiszZrodloNapedu() const;
};
