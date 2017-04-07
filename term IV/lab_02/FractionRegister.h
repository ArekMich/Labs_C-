#pragma once

#include <iostream>

using std::ostream;
class Fraction;

class FractionRegister{
private:
	Fraction * wsk;
public:	
	FractionRegister();
	FractionRegister(int);
	void operator<<(Fraction & obj_2);

	friend ostream & operator<<(ostream & screen, FractionRegister & obj_1 );

};