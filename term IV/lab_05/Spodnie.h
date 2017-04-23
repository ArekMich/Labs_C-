#pragma once

class Ubranie;

class Spodnie: public Ubranie{
protected:
	bool pogniecione_nogawki;
	bool wyprasowane_nogawki;
public:
	Spodnie(const float);
	void wyswietl_stan();
};	