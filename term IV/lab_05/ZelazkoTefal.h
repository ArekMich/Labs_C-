#pragma once
#include "Zelazko.h"

class Zelazko;

class  ZelazkoTefal: public Zelazko{
private:

public:
	ZelazkoTefal(const float);

	void UstawTemperature(int t);
	void WypiszWlasciwosci();

};