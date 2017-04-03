
// Nazwa pliku wykonywalnego: Pair

// Prosze dopisac kod, dodac nowe pliki, tak aby program wykonywal
// sie, a wynik jego dzialania byl taki sam jak podany na koñcu tego
// pliku.

// Prosze napisac klase PairOfNumbers, ktora reprezentuje pare
// liczb. Klasa ta daje rozne mozliwoœci transformacji tych liczb oraz
// ich wypisywania.

// Prosze napisac klase RangeArray, ktora na podstawie
// PairOfNumbers tworzy tablice. Rozmiar tablicy to druga liczba z
// pary minus pierwsza.

// UWAGA
// Przy rozwiazywaniu zadania NIE wolno korzystac z zadnych kontenerow
// bilbioteki standardowej m.in. z std::vector

// Pliku Main.cpp, nie wolno modyfikowac.

// Ostateczny program powinien byc przyjazny dla programisty (miec
// czytelny i dobrze napisany kod).

// Makefile dolaczony do rozwiazania powinien tworzyc plik wykonywalny
// o nazwie Pair. Program nalezy kompilowac z flagami -Wall -g.

// Makefile powinien zawierac rowniez cel "clean", ktory usuwa pliki
// obiektowe i plik wykonywalny.

// Przy wykonaniu zadania nie wolno korzystac z internetu, notatek,
// ani zadnych innych materialow (w tym wlasnych wczesniej
// przygotowanych plikow oprocz makefile)

#include<iostream>
#include "PairOfNumbers.h"
#include "RangeArray.h"

void ModifyArray (RangeArray array)
{
  std::cout<<"===== In ModifyArray =====\n";

  array.At(-2) = -10;
  array.At(2) = -20;

  std::cout << array.At(-2) << std::endl;
  std::cout << array.At(2) << std::endl;
}


int main ()
{
  using std::cout;
  using std::endl;

  int firstNumber (1), secondNumber (20);
  cout<<"raw numbers: "<<firstNumber<<"\t"<<secondNumber<<"\n";

  PairOfNumbers pair (firstNumber, secondNumber);
  cout<<"manual print: "<<pair.first<<"\t"<<pair.second<<"\n";

  cout<<"===== CHANGING VALUES =====\n";
  pair.first = 11;
  pair.second = 22;
  cout<<"raw numbers: "<<firstNumber<<"\t"<<secondNumber<<"\n";
  cout<<"manual print: "<<pair.first<<"\t"<<pair.second<<"\n";


  cout<<"===== AFTER SWAPED =====\n";
  PairOfNumbers swapped = pair.Swapped();
  swapped.Print();
  cout<<"===== AFTER Setting SWAPED =====\n";
  swapped.first  = 5;
  swapped.second  = 6;
  cout<<"raw numbers: "<<firstNumber<<"\t"<<secondNumber<<"\n";

  cout<<"===== AFTER ADD =====\n";
  pair.Add(7);
  pair.Print();

  cout<<"===== AFTER SCALE =====\n";
  pair.Scale(3383);
  pair.Print();

  cout<<"===== CONST PAIR =====\n";
  const PairOfNumbers* const constPair = new const PairOfNumbers (pair);
  constPair->Print();

  cout<<"===== OBJECTS INFO =====\n";
  pair.Info();
  constPair->Info();

  cout<<"===== CHANGING VALUES AGAIN =====\n";
  firstNumber = -2;
  secondNumber = 3;

  pair.Print();
  constPair->Print();

  cout<<"===== RANGE ARRAY =====\n";
  RangeArray array(pair);
  std::cout << array.Size() << std::endl;
  array.At(-2) = 9;
  array.At(-1) = 8;
  array.At(-0) = 5;
  array.At(1) = 13;
  array.At(2) = 12;
  std::cout << array.At(-2) << std::endl;
  std::cout << array.At(2) << std::endl;

  ModifyArray(array);

  cout << "===== BACK TO THE MAIN =====" << std::endl;
  cout << array.At(-2) << std::endl;
  cout << array.At(2) << std::endl;

  delete constPair;

  return 0;
}
/*
raw numbers: 1	20
manual print: 1	20
===== CHANGING VALUES =====
raw numbers: 11	22
manual print: 11	22
===== AFTER SWAPED =====
Print method: 22 11
===== AFTER Setting SWAPED =====
raw numbers: 6	5
===== AFTER ADD =====
Print method: 13 12
===== AFTER SCALE =====
Print method: 43979 40596
===== CONST PAIR =====
Print method: 43979 40596
===== OBJECTS INFO =====
This is NON-const pair of numbers
This is const pair of numbers
===== CHANGING VALUES AGAIN =====
Print method: -2 3
Print method: -2 3
===== RANGE ARRAY =====
5
9
12
===== In ModifyArray =====
-10
-20
===== BACK TO THE MAIN =====
9
12
*/
