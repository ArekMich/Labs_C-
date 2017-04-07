#include <iostream>
#include "FractionPointer.h"
#include "Fraction.h"

using namespace std;

FractionPointer::FractionPointer(): pointer(NULL)
{
	cout<<"Creating FractionPointer"<<endl;
}

FractionPointer::~FractionPointer(){
	if(pointer != NULL)
		delete pointer;

	cout<<"Deleting FractionPointer"<<endl;

}

FractionPointer::FractionPointer(const FractionPointer & obj_2){
	if(obj_2.pointer !=NULL){
		pointer=obj_2.pointer;
		obj_2.pointer=NULL;
	}	

	cout<<"[pointing to address="<<pointer<<" value="<<pointer->nominator<<"/"<<pointer->denominator<<"]"<<endl;

}

FractionPointer & FractionPointer::operator=(const FractionPointer & obj_2){
	if(obj_2.pointer !=NULL && pointer!=(obj_2.pointer) ){
		delete pointer;
		pointer=obj_2.pointer;
		obj_2.pointer=NULL;
	}	
return (*this);
}

FractionPointer::FractionPointer(Fraction * obj_2){
	pointer=obj_2;		
}


Fraction & FractionPointer::operator=(Fraction * obj_2){
	if(pointer!=(obj_2) && pointer!=NULL)
		delete pointer;

	pointer=obj_2;	

return (*pointer);		
}

ostream & operator<<(ostream & screen,const FractionPointer & obj_1){

	if(obj_1.pointer != NULL)
		screen<<"[pointing to address="<<obj_1.pointer<<" value="<<obj_1.pointer->nominator<<"/"<<obj_1.pointer->denominator<<"]"<<endl;
	else
		screen<<"[pointing to 0]"<<endl;
	
	return screen;
}