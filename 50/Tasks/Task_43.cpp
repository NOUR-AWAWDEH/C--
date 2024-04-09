#include<iostream>
#include<cmath>
using namespace std;

enum TimeFrame
{
    Day = 24 * 60 * 60,
    Hour = 60 * 60,
    Minute = 60,
    Second = 1
};


//////////// Sets /////////////////////////////////

int setSecondsNumber()
{
    int NumberOfSeconds;
    cout << "Please Enter The Number Of Seconds : ";
    cin >> NumberOfSeconds;
    return NumberOfSeconds;
}

int setTotalDays(int NumberOfSeconds) 
{         
    int TotalDays = NumberOfSeconds / TimeFrame::Day;
    return TotalDays;
}

int setTotalHours(int remainder)
{
    int TotalHours = remainder / TimeFrame::Hour;
    return TotalHours;
}

int setTotalMinutes(int remainder)
{
    int TotalMinutes = remainder / TimeFrame::Minute;
    return TotalMinutes;
}


int setRemainder(int  remainderPerSeconds, int remainder)
{
    return remainderPerSeconds % remainder;
}

//////////// Gets /////////////////////////////////

void getTotalDays(int TotalDays)
{
    cout << round(TotalDays) << ":" ;
}

void getTotalHours(int TotalHours)
{
    cout << round(TotalHours) << ":" ;
}

void getTotalMinutes(int TotalMinutes)
{
    cout << round(TotalMinutes) << ":";
}

void getRemainder(int remainder)
{
    cout << round(remainder) << endl;
}

void getResult(int totalDays,int totalHours,int totalMinutes,int remainder)
{
    getTotalDays(totalDays);
    getTotalHours(totalHours); 
    getTotalMinutes(totalMinutes);
    getRemainder(remainder); 
}

int main()
{
    int NumberOfSeconds = setSecondsNumber();
    int TotalDays = setTotalDays(NumberOfSeconds);
    int Remainder = setRemainder(NumberOfSeconds,TimeFrame::Day);
    int TotalHours = setTotalHours(Remainder);
    Remainder = setRemainder(NumberOfSeconds,TimeFrame::Hour);
    int TotalMinutes = setTotalMinutes(Remainder);
    Remainder = setRemainder(NumberOfSeconds,TimeFrame::Minute);
    getResult(TotalDays,TotalHours,TotalMinutes,Remainder);
     
    return 0;
}