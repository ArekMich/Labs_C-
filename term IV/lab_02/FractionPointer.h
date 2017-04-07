#pragma once 
#include <iostream>

using std::ostream;

class Fraction;

class FractionPointer{
private:
	mutable Fraction * pointer;
public:
	FractionPointer();	
	~FractionPointer();
	FractionPointer(Fraction * obj_2);
	Fraction & operator=(Fraction * obj_2);
	FractionPointer(const FractionPointer & obj_2);
	FractionPointer & operator=(const FractionPointer & obj_2);

	operator Fraction *() {return pointer;}

	friend ostream & operator<<(ostream & screen,const FractionPointer & obj_1);

};