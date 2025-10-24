#ifndef TIMESTAMP_H_INCLUDED
#define TIMESTAMP_H_INCLUDED

class timeStamp
{
private:
    int second;
    int minute;
    int hour;

public:
    timeStamp();
    timeStamp(int second, int minute, int hour);

    void Print();
    int getSecond();
    int getMinute();
    int getHour();

    bool operator==(timeStamp);
    bool operator>(timeStamp);
    bool operator<(timeStamp);
};


#endif // TIMESTAMP_H_INCLUDED
