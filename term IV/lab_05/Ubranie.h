#pragma once
#include <string>

class ZelazkoTefal;

class Ubranie{
protected:

	bool pogniecione;
	bool wyprasowane;
	bool prasowane;
	bool gniecone;

	std::string n_ubrania;
	float cena;

public:
	Ubranie();
	virtual void Pogniec();
	virtual void WypiszWlasciwosci();
	virtual void Prasuj(const ZelazkoTefal & obj);

};