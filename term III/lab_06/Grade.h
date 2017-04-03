#ifndef GRADE_H_INCLUDED
#define GRADE_H_INCLUDED
#include "Student.h"
class Student;

class Grade{
        friend class Student;
private:
    int quant_grade;
    int * tab_grade;
public:
    Grade(){}
    Grade(int igrad, Student & person);
    ~Grade();
    void print()const;

};


#endif // GRADE_H_INCLUDED
