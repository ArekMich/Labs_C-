#pragma once

class Ubranie;
class Koszule;
class ZelazkoZelmer;
class ZelazkoTefal;

class KoszulaBawelniana: public Koszule{
private:

public:	
	KoszulaBawelniana(const float k_cena);
	void WypiszWlasciwosci();
	void Prasuj(const ZelazkoZelmer & zelazko);
	void Prasuj(const ZelazkoTefal & zelazko);
	void Pogniec();
};