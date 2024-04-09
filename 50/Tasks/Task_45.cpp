#include<iostream>
using namespace std;
enum enMonthes
{
    January = 1,
    February = 2,
    March = 3,
    April = 4,
    May = 5,
    June = 6,
    July = 7,
    August = 8,
    September = 9,
    October = 10,
    November = 11,
    December = 12
};

short setMonthesNumnber()
{
    short Monthesnum;
    cout << "Please Enter the Monthes Number : ";
    cin >> Monthesnum;
    return Monthesnum;
}

void getOutputs(short Monthesnum)
{
    
    switch(Monthesnum)
    {
        case enMonthes::January:
            cout << "Its a January" << endl;
            break;
        
        case enMonthes::February:
            cout << "Its a February" << endl;
            break;
        
        case enMonthes::March:
            cout << "Its a March" << endl;
            break;
        
        case enMonthes::April:
            cout << "Its a April" << endl;
            break;
        
        case enMonthes::May:
            cout << "Its a May" << endl;
            break;
        
        case enMonthes::June:
            cout << "Its a june" << endl;
            break;
        
        case enMonthes::July:
            cout << "Its a July" << endl;
            break;
        
        case enMonthes::August:
            cout << "Its a August" << endl;
            break;
        
        case enMonthes::September:
            cout << "Its a September" << endl;
            break;
        
        case enMonthes::October:
            cout << "Its a October" << endl;
            break;
        
        case enMonthes::November:
            cout << "Its a November" << endl;
            break;
        
        case enMonthes::December:
            cout << "Its a December" << endl;
            break;
        
        default:
            cout << "You had been Enter Wrong Value";
    }
    
}

int main()
{
    short MonthNumber = setMonthesNumnber();
    getOutputs(MonthNumber);
    return 0;
}