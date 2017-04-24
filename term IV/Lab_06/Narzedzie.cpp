#include <iostream>
#include "Main.h"

using namespace std;

Narzedzie::Narzedzie(std::string n_nazwa, std::string zast): Nazwany(n_nazwa), zastosowanie(zast){}

void Narzedzie::WypiszZastosowanie() const{}
