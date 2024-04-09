#include<iostream>
using namespace std;
enum enDays
{
    Sunday = 1,
    Monday = 2,
    Tuesday = 3,
    Wednesday = 4,
    Thursday = 5,
    Friday = 6,
    Saturday = 7
};

enDays ReadDay()
{
    int day;
    cin >> day ;
    return (enDays)day; 
}

string getOutputs(enDays day)
{

    switch(day)
    {
        case enDays::Sunday:
            return "Sunday";
            break;

        case enDays::Monday:
            return "Monday";
            break;

        case enDays::Tuesday:
            return "Tuesday";
            break;

        case enDays::Wednesday:
            return "Wednesday";
            break;
      
        case enDays::Thursday:
            return "Thursday";
            break;

        case enDays::Friday:
            return "Friday";
            break;

        case enDays::Saturday:
            return "Saturday";
            break;

        default:
            return "You had been Enter Wrong Value";        
    }    
}
void ShowDaysMenu()
{
    cout << endl << "******************************" << endl;
    cout << "******************************" << endl;
    cout << "      Days OF Week            " << endl;
    cout << "******************************" << endl;
    cout << "******************************" << endl;
    cout << "(1). Sunday" << endl;
    cout << "(2). Monday" << endl;
    cout << "(3). Tuseday" << endl;
    cout << "(4). Wednesday" << endl;
    cout << "(5). Thurstday" << endl;
    cout << "(6). Friday" << endl;
    cout << "(7). Saturday" << endl;
    cout << "******************************" << endl;
}
int main()
{
    ShowDaysMenu();
    cout << "Today is : " << getOutputs(ReadDay()) << endl;
    return 0;
}