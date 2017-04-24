// ten plik MOZNA modyfikowc
#include "Pojazd.h"
#include "Reczny.h"

class Rower: public Pojazd, public Reczny
{
private:
	std::string zrodlo_napedu;	
public:
	Rower(std::string ,float ,std::string );
	void Wypisz() const;
    void WypiszPredkoscMaksymalna() const;
    void WypiszZrodloNapedu() const;
};
