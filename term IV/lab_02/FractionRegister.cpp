#include <iostream>
#include "FractionRegister.h"
#include "Fraction.h"

using namespace std;

FractionRegister::FractionRegister(): wsk(NULL) {
	cout<<"Constructing FractionRgister"<<endl;
}


void FractionRegister::operator<<(Fraction & obj_2){
	wsk=&obj_2;
}

ostream & operator<<(ostream & screen, FractionRegister & obj_1 ){
		screen<<obj_1.wsk<<endl;

	return screen;
}

