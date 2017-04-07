#include <iostream>
#include "Fraction.h"
#include "FractionRegister.h"
#include "FractionPointer.h"

using namespace std;

Fraction::Fraction(int x=0, int y=0): nominator(x), denominator(y)
{
	cout<<"Creating "<<x<<"/"<<y<<endl;
}

Fraction::~Fraction(){
	cout<<"Destroying "<<nominator<<"/"<<denominator<<endl;
}

ostream & operator<<(ostream & screen, const Fraction & object)
{
	screen<<"address="<<&object<<" value="<<object.nominator<<"/"<<object.denominator<<endl;

	return screen;
}

int & Fraction::Numerator(){
	return nominator;
}

int & Fraction::Denominator(){
	return denominator;
}