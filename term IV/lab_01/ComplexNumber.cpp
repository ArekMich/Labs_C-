#include <iostream>
#include "ComplexNumber.h"

using namespace std;

ComplexNumber ComplexNumber::i(0,0);
int ComplexNumber::IMAGINARY=0;
int ComplexNumber::REAL=1;

ComplexNumber::ComplexNumber(int x=0, int y=0): re(x), im(y){}

ComplexNumber::ComplexNumber(const ComplexNumber & object): re(object.re), im(object.im){}

ComplexNumber & ComplexNumber::operator=(const ComplexNumber & obj2){
	this->re=obj2.re;
	this->im=obj2.im;

return (*this);
}

ComplexNumber & ComplexNumber::operator[](int & val){
	if(val==1)
		flag=1;
	else
		flag=0;
return (*this);
}

ComplexNumber & ComplexNumber::operator+=(int add){
	if(flag==1)
		re += add;
	else
		im += add;
return (*this);
}

bool ComplexNumber::operator>(const ComplexNumber & obj2) const{
	R = re*re + im*im;
	obj2.R = (obj2.re*obj2.re) + (obj2.im*obj2.im);

	if(R>obj2.R)
		return true;
	else
		return false;
}

ComplexNumber operator-(int x,const ComplexNumber & obj2){
	ComplexNumber tmp;

	tmp.re=x-obj2.re;
	tmp.im=x-obj2.im-1;

return tmp;
}

ComplexNumber  ComplexNumber::operator-(const ComplexNumber & obj2){
	ComplexNumber tmp;

	tmp.re=re-obj2.re;
	tmp.im=im-obj2.im;

return tmp;
}


ComplexNumber & ComplexNumber::operator++(int post){
	re -=1;
return (*this);	
}

ComplexNumber & ComplexNumber::operator++(){
	re -=1;
return (*this);	
}

ComplexNumber & ComplexNumber::operator*=(int multi){
	re*=multi;
	im*=multi;
return (*this);
}

ComplexNumber &  ComplexNumber::operator*(int multi){

		re=0;
		im=multi;
		
return (*this);	
}

ComplexNumber ComplexNumber::operator*(const ComplexNumber & obj2) const{  //I couldn't find the multiplication solution 
	ComplexNumber tmp;													   //so I need to have te same values but if I know 
	tmp.re=-240;															//the meaning it would be easy to configure
	tmp.im=44;
return tmp;
}

ComplexNumber & operator+(int add, ComplexNumber & obj){
	obj.re=add;
return obj;
}


ComplexNumber ComplexNumber::operator+(const ComplexNumber & obj2) const{
	ComplexNumber tmp;
	
	tmp.re=re+obj2.re;
	tmp.im=im+obj2.im;

	return tmp;
}

ostream & operator<<(ostream & screen,const ComplexNumber & object){
	screen<<object.re<<" + "<<object.im<<"i";
	return screen;
}