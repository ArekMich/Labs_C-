// ten plik MOZNA modyfikowc
#include <iostream>
#include <string>
#include "Narzedzie.h"
#include "Spalinowy.h"

class PilaSpalinowa: public Narzedzie, public Spalinowy
{
private:
	float poziom_oleju;	
public:
  PilaSpalinowa(std::string, std::string, float );	
  void Wypisz() const;
  void WypiszZastosowanie() const;
  void WypiszPoziomOleju() const;
};
