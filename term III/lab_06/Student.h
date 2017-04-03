#ifndef STUDENT_H
#define STUDENT_H
#include "Grade.h"

class Grade;

class Student{
    friend class Grade;
private:
    int ID;
    Grade * grad;
public:
    Student();
    void setID(int id);
    void print();
    ~Student();



};
#endif // STUDENT_H
