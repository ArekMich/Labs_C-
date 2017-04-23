#pragma once

class Ubranie;
class Spodnie;
class ZelazkoZelmer;
class ZelazkoTefal;

class SpodnieJedwabne: public Spodnie{
private:

public:	
	SpodnieJedwabne(const float k_cena);
	void WypiszWlasciwosci();
	void Prasuj(const ZelazkoZelmer & zelazko);
	void Prasuj(const ZelazkoTefal & zelazko);
	void PrasujNogawki(const ZelazkoZelmer & zelazko);
	void Pogniec();
};