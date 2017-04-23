#pragma once
#include "Zelazko.h"

class Zelazko;

class  ZelazkoZelmer: public Zelazko{
private:

public:
	ZelazkoZelmer(const float);

	void UstawTemperature(int t);
	void WypiszWlasciwosci();

};