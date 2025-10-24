#ifndef UNSORTEDARR_H_INCLUDED
#define UNSORTEDARR_H_INCLUDED

const int MAX_ITEMS = 5;
template <class ItemType>
class UnsortedArr
{
public :
    UnsortedArr();
    void MakeEmpty();
    bool IsFull();
    int LengthIs();
    void InsertItem(ItemType);
    void DeleteItem(ItemType);
    void RetrieveItem(ItemType&, bool&);
    void ResetList();
    void GetNextItem(ItemType&);
    void PrintInfo();
private:
    int length;
    ItemType info[MAX_ITEMS];
    int currentPos;
};

#endif // UNSORTEDARR_H_INCLUDED
