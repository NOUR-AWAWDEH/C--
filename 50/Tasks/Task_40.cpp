#include <iostream>
using namespace std;
int main()
{
    float BillValue;
    const float ServiceFee = 1.10f;
    const float SalesTax = 1.16f;

    cout << "Please Enter The Bill Value : ";
    cin >> BillValue;
    float TotalBill = ServiceFee * BillValue * SalesTax;

    cout << "Your Total Bill is : "<< TotalBill <<endl;

    return 0;
}
