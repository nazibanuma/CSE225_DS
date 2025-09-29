#ifndef DYNARRP_H_INCLUDED
#define DYNARRP_H_INCLUDED

class dynArrP
{
private:
    int *arr;
    int size;
public:
    dynArrP()
    {
        arr = NULL;
        value =0;
    }
    dynArrP(int size)
    {
        arr = new int[size];
        this->size = size;
    }
    int setValue(int index,int value)
    {
        arr[index] = value;
    }
    int getValue(int index)
    {
        return arr[index];
    }
    ~dynArrP()
    {
        delete [] arr;
    }

    void allocate(int s)
    {
        s = size;
        arr = new int[s];
    }


};
#endif
