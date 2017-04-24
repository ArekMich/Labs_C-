#pragma once

#include <iostream>
#include <string>

class NazwanyBaza{
protected:
	std::string nazwa;
public:
	NazwanyBaza(std::string iNazwa): nazwa(iNazwa){}
	//virtual void Wypisz() = 0;
	virtual void Wypisz() const=0;	
};