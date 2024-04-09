#include <iostream>
using namespace std ;

int main()
{
    short Penny = 1;
    short Nickel = 5;
    short Dime = Nickel * 2;
    short Quarter = Nickel + (2 * Dime) ;
    short Dollars = Quarter * 4;

    short TotalByPennys = 0 , Input;

    cout <<"How Much You Add in penny : ";
    cin >> Input;
    TotalByPennys = Input * Penny;

    cout <<"How Much You Add in Nickel : ";
    cin >> Input;
    TotalByPennys = TotalByPennys + Input * Nickel;

    cout <<"How Much You Add in Dime : ";
    cin >> Input;
    TotalByPennys = TotalByPennys + Input * Dime;

    cout <<"How Much You Add in Quarter : ";
    cin >> Input;
    TotalByPennys = TotalByPennys + Input * Quarter;

    cout <<"How Much You Add in Dolars : ";
    cin >> Input;
    TotalByPennys = TotalByPennys + Input * Dollars; 
    
    float TotalByDollars = TotalByPennys / Dollars;  
    cout << "The Totoal is : " << TotalByPennys << " Pennes" << endl;
    cout << "The Totoal is : " << TotalByDollars << " Dollars" << endl;

    return 0;
}