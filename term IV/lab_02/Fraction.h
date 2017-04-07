#pragma once
#include <iostream>

using std::ostream;
class FractionRegister;
class FractionPointer;

class Fraction{
	friend class FractionPointer;
	friend class FractionRegister;
private:
	int nominator;
	int denominator;
public:
	Fraction(int, int);
	~Fraction();

	int & Numerator();
	int & Denominator();


	friend ostream & operator<<(ostream & screen, const Fraction & object);
	friend ostream & operator<<(ostream & screen,const FractionPointer & obj_1);

};