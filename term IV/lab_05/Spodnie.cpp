#include <iostream>
#include "Ubranie.h"
#include "Spodnie.h"

using namespace std;

Spodnie::Spodnie( const float k_cena): Ubranie(){
	cena=k_cena;
	pogniecione_nogawki=1;
	wyprasowane_nogawki=0;
}

void Spodnie::wyswietl_stan(){

if(prasowane==1){
	if(pogniecione==true)
		cout<<" Stan ubrania: pogniecione. ";
	else if(wyprasowane==true)
		cout<<" Stan ubrania: wyprasowane. ";

	if(pogniecione_nogawki==true)
		cout<<" Stan nogawki: pogniecione.";
	else if(wyprasowane_nogawki==true)
		cout<<" Stan nogawki: wyprasowane.";		
	cout<<endl;
}else if(gniecone==1){
	if(pogniecione==true)
		cout<<" Stan ubrania: pogniecione. ";
	else if(wyprasowane==true)
		cout<<" Stan ubrania: wyprasowane. ";

}

}
