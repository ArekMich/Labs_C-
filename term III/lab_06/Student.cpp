#include <iostream>
#include "Student.h"
#include "Grade.h"
#include <new>

class Grade;
using namespace std;

int Gid=0;
Student * wsk;

Student::Student(){
    grad= new Grade;
    grad->tab_grade=NULL;
    grad->quant_grade=0;
    ID=0;
    wsk=this;
}

void Student::setID(int id){
    ID=id;
    Gid=id;
}

void Student::print(){
    if(grad->quant_grade==0)
        cout<<"Student print ID="<<ID<<endl;
    else {
        cout<<"Student print ID="<<ID<<" grades:";
        for(int i=0; i<grad->quant_grade;i++)
            cout<<" "<<grad->tab_grade[i];
        cout<<endl;
    }
}

Student::~Student(){
    delete grad;
}
