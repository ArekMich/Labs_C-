#include <iostream>
#include "ComplexNumber.h"
#include "ComplexArray.h"
using namespace std;

ComplexNumber::ComplexNumber(const ComplexNumber & cpy){
    re=cpy.re;
    im=cpy.im;
}

void ComplexNumber::Print() const {
        cout<<re<<" + "<<im<<"i"<<endl;
}

ComplexNumber * ComplexNumber::operator=(int val){
    re=val;
    im=0;

 return this;
}

ComplexNumber ComplexNumber::Add(const ComplexNumber & obj){
    ComplexNumber tmp;
    tmp.re=re+obj.re;
    tmp.im=im+obj.im;
   return tmp;
}




