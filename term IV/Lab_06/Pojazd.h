#pragma once

//class NazwanyBaza;
#include "Nazwany.h"

class Pojazd: public Nazwany{
protected:
	float max_predkosc;
public:
	Pojazd(std::string n_nazwa, float predkosc);
	virtual void WypiszPredkoscMaksymalna() const;	
};
