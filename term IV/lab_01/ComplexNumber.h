#pragma once
#include <iostream>

using std::ostream;


class ComplexNumber{
private:
	int re;
	int im;
	mutable int R;
	int flag;

public:
	static int IMAGINARY;
	static int REAL;
	static ComplexNumber i;
	ComplexNumber(int, int);
	ComplexNumber(const ComplexNumber & );

	ComplexNumber operator+(const ComplexNumber & obj2) const;
	bool operator>(const ComplexNumber & obj2) const;
	ComplexNumber operator-(const ComplexNumber & obj2);
	ComplexNumber & operator[](int &);
	ComplexNumber & operator=(const ComplexNumber & obj2);
	ComplexNumber & operator+=(int add);
	ComplexNumber & operator*(int multi);
	ComplexNumber & operator*=(int multi);
	ComplexNumber & operator++(int post);
	ComplexNumber & operator++();
	ComplexNumber operator*(const ComplexNumber & obj2) const;
	

	friend ostream & operator<<(ostream & screen,const ComplexNumber & object);
	friend ComplexNumber & operator+(int add,ComplexNumber & obj);
	friend ComplexNumber operator-(int x,const ComplexNumber & obj2);
};


