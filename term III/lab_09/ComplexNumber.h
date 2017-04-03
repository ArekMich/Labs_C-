#ifndef COMPLEXNUMBER_H_INCLUDED
#define COMPLEXNUMBER_H_INCLUDED
class ComplexArray;

class ComplexNumber{
    friend class ComplexArray;
private:
    int re;
    int im;
public:
    ComplexNumber(int x=0 , int y=0): re(x), im(y){}
    ComplexNumber(const ComplexNumber & cpy);
    ComplexNumber Add(const ComplexNumber & obj);
    void Print() const;

    ComplexNumber * operator=(int);
};



#endif // COMPLEXNUMBER_H_INCLUDED
