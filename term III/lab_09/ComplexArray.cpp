#include <iostream>
#include "ComplexArray.h"
#include "ComplexNumber.h"
#include <stdlib.h>

using namespace std;
class ComplexNumber;

int flag=0;;

ComplexArray::ComplexArray(int n){
    if(flag==0){
        tab=(ComplexNumber *)malloc(sizeof(ComplexNumber)*n);
        size_tab=n;
    }
}

ComplexNumber&  ComplexArray::At(int position){
    return tab[position];
}

void ComplexArray::Set(int pos, const ComplexNumber & obj){
    tab[pos].re=obj.re;
    tab[pos].im=obj.im;
}

void ComplexArray::Print(){
    cout<<"Array:"<<endl;
    for(int i=0; i<size_tab;i++)
        cout<<i+1<<": "<<tab[i].re<<" + "<<tab[i].im<<"i"<<endl;
}






