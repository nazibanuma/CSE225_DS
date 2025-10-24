#ifndef DYNARR_H_INCLUDED
#define DYNARR_H_INCLUDED

template <typename T>
class dynarr
{
private:
    T *data;
    int size;
public:
    dynarr();
    dynarr(int);
    ~dynarr();
    void setValue(int, T);
    T getValue(int);
};


#endif // DYNARR_H_INCLUDED
