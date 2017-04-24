// ten plik MOZNA modyfikowc

#include "Pojazd.h"
#include "Spalinowy.h"

class Samochod: public Pojazd, public Spalinowy
{
private:	
	float poziom_oleju;
public:
	Samochod(std::string ,float ,float);
 	void Wypisz() const;
 	void WypiszPredkoscMaksymalna() const;
 	void WypiszPoziomOleju() const;

};
