#include "PairOfNumbers.h"
#include <iostream>

using namespace std;

PairOfNumbers::PairOfNumbers(int &x, int &y): first(x),second(y){}

PairOfNumbers::PairOfNumbers(const PairOfNumbers & object): first(object.first), second(object.second){cout<<"Konstruktor kopiuj¹cy!"<<endl;}

PairOfNumbers & PairOfNumbers::operator=(const PairOfNumbers & object){
    first=object.first;
    second=object.second;
}

PairOfNumbers PairOfNumbers::Swapped(){
    int tmp=first;
    first=second;
    second=tmp;

return (*this);
}

void PairOfNumbers::Print()const{
    cout<<"Print method: "<<first<<" "<<second<<endl;
}

void PairOfNumbers::Add(int n){
    first += n;
    second += n;
}

void PairOfNumbers::Scale(int n){
     first *= n;
    second *= n;
}

void PairOfNumbers::Info(){
    cout<<"This is NON-const pair of numbers"<<endl;
}

void PairOfNumbers::Info() const{
    cout<<"This is const pair of numbers"<<endl;
}











