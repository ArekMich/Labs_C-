#ifndef PAIROFNUMBERS_H_INCLUDED
#define PAIROFNUMBERS_H_INCLUDED

class PairOfNumbers {
private:

public:
    int &first;
    int &second;

    PairOfNumbers(int &x, int &y);
    PairOfNumbers(const PairOfNumbers & object);
    PairOfNumbers Swapped();
    void Print() const;
    void Add(int);
    void Scale(int);
    void Info();
    void Info() const;

    PairOfNumbers & operator=(const PairOfNumbers & object);



};



#endif // PAIROFNUMBERS_H_INCLUDED
