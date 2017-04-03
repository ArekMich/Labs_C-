#ifndef STUDENTLIST_H_INCLUDED
#define STUDENTLIST_H_INCLUDED

#include "Student.h"
class StudentsList;
static int val;


class Student;

class StudentsList{
    friend class Student;
private:
        char * subject;
        static  Student * HEAD;

public:
    StudentsList(const char * iSubject);
    ~StudentsList();
    void PrintInfo();
    void AddStudent(Student * iObject);
    void AddStudent(const char * iName,const char * iSurname);
    void PrintAll();


};


#endif // STUDENTLIST_H_INCLUDED
