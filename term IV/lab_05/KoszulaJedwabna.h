#pragma once

class Ubranie;
class Koszule;
class ZelazkoZelmer;
class ZelazkoTefal;

class KoszulaJedwabna: public Koszule{
private:

public:	
	KoszulaJedwabna(const float k_cena);
	void WypiszWlasciwosci();
	void Prasuj(const ZelazkoZelmer & zelazko);
	void Prasuj(const ZelazkoTefal & zelazko);
	void PrasujRekawy(const ZelazkoZelmer & zelazko);
	void Pogniec();
};