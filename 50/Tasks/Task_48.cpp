#include <iostream>
using namespace std;

int main()
{
    short LaanAmount , MonthsOfSettleTheLaan;
    cout << "How Much The Laan Amount You want : ";
    cin >> LaanAmount;

    cout << "How Many Months you beed to Settle The Loan : ";
    cin >> MonthsOfSettleTheLaan;

    short AmountOfPayment = LaanAmount / MonthsOfSettleTheLaan;

    cout << "You Will Pay " << AmountOfPayment << " Per Months"; 

    return 0;
}