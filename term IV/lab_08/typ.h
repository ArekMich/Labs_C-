#pragma once

class ObiektMiotajacy;
class typ3;
class typ4;

class typ{
protected:
	ObiektMiotajacy * miotacz;
public:
	typ(){}

	void wsk_miotacz(ObiektMiotajacy * wskOBJ){ miotacz = wskOBJ;}
	virtual void PrzedstawSie() = 0;

	~typ();	
};

//------------TYP 3----------------------------------

class typ3: public typ{
public:
	typ3(){}
	void PrzedstawSie();

};

//------------TYP 4----------------------------------

class typ4: public typ{
public:
	typ4(){}
	void PrzedstawSie();

};

//------------TYP 1----------------------------------

class typ1: public typ3{
public:
	typ1(){}                          //konstruktor domniemany
	void PrzedstawSie();

};


//------------TYP 2----------------------------------

class typ2: public typ4{
public:
	typ2(){}
	void PrzedstawSie();

};

