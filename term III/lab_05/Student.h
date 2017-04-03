#ifndef STUDENT_H_INCLUDED
#define STUDENT_H_INCLUDED
#include "StudentList.h"

class StudentsList;

class Student{
    friend class StudentsList;
private:
    char * name;
    char * surname;

    Student * next;

public:
    Student(const char * iName,const char * iSurname );
    ~Student();
    void Print();
    StudentsList * ParentList();

};



#endif // STUDENT_H_INCLUDED
