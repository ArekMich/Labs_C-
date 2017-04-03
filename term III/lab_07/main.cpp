// Nazwa pliku wykonywalnego: WorekPrezentow

// Prosze dopisac kod, dodac nowe pliki, tak aby program wykonywal
// sie, a wynik jego dzialania byl taki sam jak podany na koñcu tego
// pliku.

// Prosze napisac klase Worek, ktora dziala jak kolejka LIFO. W
// kolejce beda przechowywane obiekty typu Prezent, ktore zawieraja
// informacje o cenie. Dodatkowo dostepna jest informcja o tym ile
// obiektow typu Prezent aktualnie istnieje.

// UWAGA!!!
// Do rozwiazania zadania nie wolno uzywac tablic ani wektorow. Uzycie
// niedozwolonej struktury oznacza 0 punktow.

// Prosze upewnic sie, ze nie ma problemow z pamiecia.

// Pliku Main.cpp, nie wolno modyfikowac.

// Ostateczny program powinien byc przyjazny dla programisty (miec
// czytelny i dobrze napisany kod).

// Makefile dolaczony do rozwiazania powinien tworzyc plik wykonywalny
// o nazwie WorekPrezentow. Program nalezy kompilowac z flagami -Wall -g.

// Makefile powinien zawierac rowniez cel "clean", ktory usuwa pliki
// obiektowe i plik wykonywalny.

// Przy wykonaniu zadania nie wolno korzystac z internetu, notatek,
// ani zadnych innych materialow (w tym wlasnych wczesniej
// przygotowanych plikow oprocz makefile)

// Kody zrodlowe musza znajdowac sie w katalogu do ktorego nikt oprocz
// wlasciciela nie ma praw dostepu.

// Rozwiazanie (czyli dodane pliki, makefile i Main.cpp) nalezy pozostawic w katalogu gdzie byl plik Main.cpp

#include <iostream>
#include "Prezent.h"
#include "Worek.h"

int main() {

  const float wartoscCzapki = 100;
  Prezent czapka (wartoscCzapki);
  Prezent skarpety (35);
  skarpety.Wypisz();
  Prezent* wypasionaCzapka = new Prezent (200);
  Prezent szalik (55);

  skarpety.NapiszIleJestPrezentow();
  delete wypasionaCzapka;
  skarpety.NapiszIleJestPrezentow();

  Worek worekZPrezentami;

  worekZPrezentami.Wloz(skarpety);
  worekZPrezentami.Wloz(szalik);
  worekZPrezentami.Wloz(czapka);
  worekZPrezentami.Wloz(szalik);

  skarpety.NapiszIleJestPrezentow();

  worekZPrezentami.Wyciagnij().Wypisz();
  worekZPrezentami.Wyciagnij().Wypisz();
  std::cout<<"W polowie"<<std::endl;
  skarpety.NapiszIleJestPrezentow();
  worekZPrezentami.Wyciagnij().Wypisz();
  worekZPrezentami.Wyciagnij().Wypisz();
  worekZPrezentami.Wyciagnij();

  skarpety.NapiszIleJestPrezentow();

  return 0;
}

/** Wynik dzialania programu:
Ten prezent kosztuje: 35
Aktualna liczba prezentow: 4
Aktualna liczba prezentow: 3
Aktualna liczba prezentow: 7
Ten prezent kosztuje: 55
Ten prezent kosztuje: 100
W polowie
Aktualna liczba prezentow: 5
Ten prezent kosztuje: 55
Ten prezent kosztuje: 35
Niestety, prezenty juz sie skonczyly.
Aktualna liczba prezentow: 3
*/



