#include<iostream>
using namespace std;

void DisplaySumNumbers()
{
    short Number1, Number2;
    cout << "Please Enter the Number1 : ";
    cin >> Number1;
    cout << "Please Enter the Number2 : ";
    cin >> Number2;
    cout << "******************************";
    cout << Number1 + Number2;
}

int SumNumbers()
{
    short Number1, Number2;
    cout << "Please Enter the Number1 : ";
    cin >> Number1;
    cout << "Please Enter the Number2 : ";
    cin >> Number2;
    cout << "******************************";
    return Number1 + Number2;
}

int main()
{
    DisplaySumNumbers();
    cout << endl <<SumNumbers() << endl;
    return 0;
}