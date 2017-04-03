#ifndef RANGEARRAY_H_INCLUDED
#define RANGEARRAY_H_INCLUDED
class PairOfNumbers;

class RangeArray{
private:
    int * tab;
    int leng;
    int position;
public:
    RangeArray(const PairOfNumbers & obj);
    RangeArray(const RangeArray & obj);
    int Size();
    int& At(int);
    ~RangeArray();

};


#endif // RANGEARRAY_H_INCLUDED
