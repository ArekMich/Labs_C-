#pragma once

class Ubranie;

class Koszule: public Ubranie{
protected:
	bool pogniecione_rekawy;
	bool wyprasowane_rekawy;
public:
	Koszule(const float);
	void wyswietl_stan();

};	