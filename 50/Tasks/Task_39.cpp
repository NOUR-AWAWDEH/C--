#include <iostream>
using namespace std;

int main()
{
    float TotalBill,CashPaid;
    cout << "Please Enter the TotalBill : ";
    cin >> TotalBill;
    cout << "Please Enter the CashPaid : ";
    cin >> CashPaid;

    cout << "The Remaing is : " << CashPaid - TotalBill << endl;
    return 0;
}