#include <iostream>
#include <string.h>
#include "Student.h"
#include "StudentList.h"

using namespace std;

class StudentsList;
extern StudentsList * lst;
extern int ile;

 Student::Student(const char * iName,const char * iSurname ){
    name=new char [strlen(iName)+1];
    surname=new char [strlen( iSurname)+1];

    strcpy(name,iName);
    strcpy(surname,iSurname);

    next=NULL;
    val++;
    ile=val;
 }

 void Student::Print(){

    cout<<"Student "<<val<<": "<<name<<", "<<surname<<endl;
 }
 //Student 2: Sterling, Archer

 StudentsList * Student::ParentList(){
    return lst;
 }
