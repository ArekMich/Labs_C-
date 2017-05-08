#include <iostream>
#include "typ.h"

using namespace std;

typ::~typ(){
	if(miotacz)
		delete miotacz;
}

void typ1::PrzedstawSie(){
	cout<<" Nazywam sie 1"<<endl;
}

void typ2::PrzedstawSie(){
	cout<<" Nazywam sie 2"<<endl;
}

void typ3::PrzedstawSie(){
	cout<<" Nazywam sie 3"<<endl;
}

void typ4::PrzedstawSie(){
	cout<<" Nazywam sie 4"<<endl;
}