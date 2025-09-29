#ifndef DYNARR_H_INCLUDED
#define DYNARR_H_INCLUDED

class dynarr
{
private:
    int *arr;
    int size;
public:
    dynarr()
    {
        arr = NULL;
        size =0;
    }

    dynarr(int size)
    {
        this->size = size;
        arr = new int[size];

    }

    void setValue(int index,int value)
    {
        arr[index] = value;
    }

    int getValue(int index)
    {
        return arr[index];
    }

    ~dynarr()
    {
        delete [] arr;
    }

};


#endif // DYNARR_H_INCLUDED

