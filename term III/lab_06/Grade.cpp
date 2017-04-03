#include <iostream>
#include "Grade.h"
#include "Student.h"
#include <malloc.h>

using namespace std;

extern int Gid;
extern Student * wsk;

Grade::Grade(int igrad, Student & person){
    person.grad->quant_grade++;
    int * tmp;

    if(person.grad->tab_grade==NULL){
            person.grad->tab_grade=(int *) malloc(sizeof(int));
            person.grad->tab_grade[0]=igrad;
            cout<<person.grad->tab_grade[person.grad->quant_grade-1]<<endl;
    }  else{
         for(int i=0;i<person.grad->quant_grade-1;i++)
             tmp[i]=person.grad->tab_grade[i];

        person.grad->tab_grade=(int *) malloc(sizeof(int)*person.grad->quant_grade);

        for(int i=0;i<person.grad->quant_grade;i++)
             person.grad->tab_grade[i]=tmp[i];

        person.grad->tab_grade[person.grad->quant_grade-1]=igrad;
        cout<<person.grad->tab_grade[person.grad->quant_grade-1]<<endl;
    }
}

Grade::~Grade(){

}

void Grade::print()const{

    cout<<"Grade print value="<<wsk->grad->tab_grade[wsk->grad->quant_grade-1]<<" studentID="<<Gid<<endl;
}



