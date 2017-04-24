#pragma once

//class NazwanyBaza;
#include "Nazwany.h"
#include <iostream>
#include <string>

class Narzedzie: public Nazwany{
protected:
	std::string zastosowanie;
public:
	Narzedzie(std::string n_nazwa, std::string zast);
	virtual void WypiszZastosowanie() const;	
};
