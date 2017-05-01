#pragma once

#include <iostream>

class Lista{
private:
	int * listArray;
	int count;
public:	
	Lista();
	Lista(int * tab, const int rozmiar);
	Lista operator+ (const int value);
	Lista operator+ (const Lista& list);
	Lista& operator= (const Lista& list);
	Lista& operator+= (const int value);
	int& operator[](const unsigned int value) const;
	int** GetList();
	int getSize() const;
	void  setSize(const int );
	int at(const int ) const;

	typedef int * Iterator;
	Iterator poczatek();
	Iterator koniec();

	

	~Lista();

};

std::ostream& operator << (std::ostream & ekran, const Lista& list );