#include "timeStamp.h"
#include<iostream>

using namespace std;

timeStamp::timeStamp()
{
    second = 0;
    minute = 0;
    hour = 0;
}

timeStamp::timeStamp(int hour, int minute, int second)
{
    this->second = second;
    this->minute = minute;
    this->hour = hour;
}

void timeStamp::Print()
{
    cout << hour << ":" << minute << ":" << second << endl;
}

int timeStamp::getSecond()
{
    return second;
}

int timeStamp::getMinute()
{
    return minute;
}

int timeStamp::getHour()
{
    return hour;
}

bool timeStamp::operator>(timeStamp temp)
{
    int time1 = second + (minute * 60) + (hour * 3600);
    int time2 = temp.second + (temp.minute * 60) + (temp.hour * 3600);

    if(time1 > time2)
    {
        return true;
    }
    else
    {
        return false;
    }

    /*if (hour > temp.getHour())
    {
        return true;
    }
    else if (hour == temp.getHour() && minute > temp.getMinute())
    {
        return true;
    }
    else if (hour == temp.getHour() && minute == temp.getMinute() && second > temp.getSecond())
    {
        return true;
    }
    else
    {
        return false;
    }*/
}

bool timeStamp::operator<(timeStamp temp)
{
    int time1 = second + (minute * 60) + (hour * 3600);
    int time2 = temp.second + (temp.minute * 60) + (temp.hour * 3600);

    if(time1 < time2)
    {
        return true;
    }
    else
    {
        return false;
    }

    /*
    if (hour > temp.getHour())
    {
        return true;
    }
    else if (hour == temp.getHour() && minute < temp.getMinute())
    {
        return true;
    }
    else if (hour == temp.getHour() && minute == temp.getMinute() && second < temp.getSecond())
    {
        return true;
    }
    else
    {
        return false;
    }
    */
}

bool timeStamp::operator==(timeStamp temp)
{
    return (second == temp.getSecond() && minute == temp.getMinute() & hour == temp.getHour());
}


