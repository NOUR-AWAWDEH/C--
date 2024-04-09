#include <iostream>
#include<string>
#include <cmath>
using namespace std;

short setValue(string str)
{
    short TimeValue;
    cout << "How many " << str << "you have : ";
    cin >> TimeValue;
    return TimeValue;
}

int setTotalSeconds(short days,short hours,short minutes,short seconds)
{
    return ( days * 24 * 60 * 60 ) + ( hours * 60 * 60 ) + (minutes * 60) + (seconds);
}

void getTotalSeconds(int totalSeconds)
{
    cout << "The Total By Seconds is : " << round(totalSeconds);
}
int main()
{
    short 
     Days = setValue("Days")
    ,Hours = setValue("Hours")
    ,Minutes = setValue("Minutes")
    ,Seconds = setValue("Seconds");
    
    int TotalSeconds = setTotalSeconds(Days,Hours,Minutes,Seconds);
    getTotalSeconds(TotalSeconds);

    
    return 0;
}