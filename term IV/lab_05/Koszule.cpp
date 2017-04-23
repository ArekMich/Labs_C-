#include <iostream>
#include "Ubranie.h"
#include "Koszule.h"

using namespace std;

Koszule::Koszule( const float k_cena): Ubranie(){
	cena=k_cena;
	pogniecione_rekawy=1;
	wyprasowane_rekawy=0;
}

void Koszule::wyswietl_stan(){
if(prasowane==1){	

	if(pogniecione==true)
		cout<<" Stan ubrania: pogniecione. ";
	else if(wyprasowane==true)
		cout<<" Stan ubrania: wyprasowane. ";

	if(pogniecione_rekawy==true)
		cout<<" Stan rekawow: pogniecione.";
	else if(wyprasowane_rekawy==true)
		cout<<" Stan rekawow: wyprasowane.";		
	cout<<endl;

}else if(gniecone==1){
	if(pogniecione==true)
		cout<<" Stan ubrania: pogniecione. ";
	else if(wyprasowane==true)
		cout<<" Stan ubrania: wyprasowane. ";
}

}

// Stan ubrania: pogniecione. Stan rekawow: pogniecione.