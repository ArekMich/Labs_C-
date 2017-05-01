#include <iostream>
#include "Main.h"

using namespace std;

typedef int * Iterator;

Lista::Lista(): listArray(0), count(0){}

Lista::Lista(int * tab, const int rozmiar){
	listArray = new int [rozmiar];
	setSize(rozmiar);

	for(int i=0; i<count ; ++i)
		(*(this->GetList()))[i]=tab[i];

}

Lista Lista::operator+ (const int value){
	Lista tmpList;

	*(tmpList.GetList())=new int[count + 1];

	for(int i=0; i<count ; ++i)
		(*(tmpList.GetList()))[i]= listArray[i];
	(*(tmpList.GetList()))[count]=value;
	tmpList.setSize(count+1);

return tmpList;
}

Lista Lista::operator+ (const Lista& list){

	Lista tmpList;
	int rozmiar= getSize() + list.getSize();
	tmpList.setSize(rozmiar);

	(*(tmpList.GetList()))= new int [rozmiar];
	for(int i=0; i< count; ++i)
		(*(tmpList.GetList()))[i] = listArray[i];
	for(int j =0; j<list.count; ++j)
		(*(tmpList.GetList()))[count + j] = list.listArray[j];

	return tmpList;

}

Lista& Lista::operator+= (const int value){

	Lista tmpList;

	(*(tmpList.GetList())) = new int [count + 1];

	for(int i =0; i<count ; ++i)
		(*(tmpList.GetList()))[i] = listArray[i];
	(*(tmpList.GetList()))[count] = value;
	tmpList.setSize(count+1);

	(*this)=tmpList;

return (*this);	
}

Lista& Lista::operator= (const Lista& list){

	if(&list==this)
		return (*this);

	if(listArray)
		delete [] listArray;

	count = list.getSize();
	listArray = new int [count];

	for (int i=0; i < count; ++i){
		listArray[i] = list.at(i); 
	}

	return (*this);
}

int& Lista::operator[](const unsigned int value) const {

	return listArray[value];
}

int** Lista::GetList(){
	return (&listArray);
}

int Lista::getSize() const {
	return count;
}
 
void Lista::setSize(const int value){
	count=value;
}

int Lista::at(const int position) const{
	return listArray[position];
}

Iterator Lista::poczatek(){

	return listArray;
}

Iterator Lista::koniec(){

	return listArray + count -1;
}

Lista::~Lista(){

	if(listArray)
		delete [] listArray;
}

std::ostream& operator << (std::ostream & ekran, const Lista& list ){
	
	for(int i =0; i <list.getSize() ; ++i)
		ekran<<list.at(i)<<" ";

return ekran;	
}