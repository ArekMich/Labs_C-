#include <iostream>
#include "StudentList.h"
#include "Student.h"
#include <string.h>

using namespace std;

Student * StudentsList::HEAD;
StudentsList * lst;
int ile;

StudentsList::StudentsList(const char * iSubject){
    subject=new char[strlen(iSubject)+1];
    strcpy(subject,iSubject);

    HEAD=NULL;
    lst=this;

    cout<<"Tworzenie konstruktora: "<<subject<<endl;
}

StudentsList::~StudentsList(){
}

 void StudentsList::PrintInfo(){
        cout<<"Students list: "<<subject<<" (address: <"<<this<<">)"<<endl;
 }

void StudentsList::AddStudent(Student * iObject){
    if(HEAD==NULL)
        HEAD=iObject;
    cout<<"dziala dodanie studenta do listy: "<<iObject->name<<endl;


    if(HEAD!=NULL){
        Student * tmp=HEAD;

        while(tmp->next){
            tmp=tmp->next;
        }
        tmp->next=iObject;
        iObject->next=NULL;
    }

    cout<<"Tworzymy ucznia: "<<iObject->name<<" "<<iObject->surname<<endl;

}

void StudentsList::AddStudent(const char * iName,const char * iSurname){
    Student * student=new Student(iName,iSurname);

  /*  student->name=new char[strlen(iName)+1];
    student->surname=new char[strlen(iSurname)+1];

    strcpy(name,iName);
    strcpy(surname,iSurname);
*/
    if(HEAD!=NULL){
        Student * tmp=HEAD;

        while(tmp->next){
            tmp=tmp->next;
        }
        tmp->next=student;
        student->next=NULL;
    }

    cout<<"Tworzymy ucznia: "<<student->name<<" "<<student->surname<<endl;
}

void StudentsList::PrintAll(){
    Student * tmp=HEAD;

    for(int i=1;i<=ile;i++){
        cout<<"Student "<<i<<": "<<tmp->name<<", "<<tmp->surname<<endl;
        tmp=tmp->next;
    }

    cout<<"FUCK YOU ALL !!!";
}

