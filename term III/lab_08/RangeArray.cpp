#include <iostream>
#include "RangeArray.h"
#include "PairOfNumbers.h"

using namespace std;

RangeArray::RangeArray(const PairOfNumbers & obj){
    int size_tab=obj.second-obj.first;
    leng=size_tab;
    tab=new int[size_tab];
    cout<<"stworzona tablica"<<endl;
}

RangeArray::RangeArray(const RangeArray & obj){

    leng=obj.leng;
    tab=new int[leng];
        for(int i=0; i<=leng;i++)
            tab[i]=0;
}

int RangeArray::Size(){
    return leng;
}

int& RangeArray::At(int place){
    position=place;

  return tab[position+2];
}

RangeArray::~RangeArray(){
    delete[]tab;
    cout<<"dealokacja pamieci"<<endl;
}
