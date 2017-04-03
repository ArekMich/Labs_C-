#ifndef COMPLEXARRAY_H_INCLUDED
#define COMPLEXARRAY_H_INCLUDED
class ComplexNumber;

class ComplexArray{
private:
    ComplexNumber * tab;
    int size_tab;
public:
    ComplexArray(int);
    ComplexNumber& At(int);
    void Set(int, const ComplexNumber & obj);
    void Print();

};



#endif // COMPLEXARRAY_H_INCLUDED
