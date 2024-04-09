#include<iostream>
using namespace std;

int main()
{
    short LaanAmount, MonthlyPayment;

    cout << "Please Enter The Laan Amount : ";
    cin >> LaanAmount;

    cout << "Please Enter The Monthly Payment : ";
    cin >> MonthlyPayment;

    short Months = LaanAmount / MonthlyPayment;

    cout << endl << Months << " Months" << endl;
    return 0;
}
