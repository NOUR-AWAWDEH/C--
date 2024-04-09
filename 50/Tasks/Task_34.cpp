#include <iostream>
using namespace std;

enum SalesScales
{
    OneMillion = 1000000,
    HalfMillion = 500000,
    OneHandredK = 100000,
    FiftyK = 50000
};

enum Commission
{
    OnePerCent = 1,
    TowPerCent = 2,
    ThreePerCent = 3,
    FivePerCent = 5
};

float setTotalSales()
{
    float totalSales;
    cout << "Please Enter the Total Sales : ";
    cin >> totalSales;
    return totalSales;
}


float CalculateCommission( float totalSales)
{
    if( totalSales >= SalesScales::HalfMillion && totalSales <= SalesScales::OneMillion )
    {
        return (totalSales * Commission::OnePerCent) / 100 ; 
    }
    else if(totalSales >= SalesScales::OneHandredK && totalSales <= SalesScales::HalfMillion)
    {
        return (totalSales * Commission::TowPerCent ) / 100;
    }
    else if(totalSales >= SalesScales::FiftyK && totalSales <= SalesScales::OneHandredK)
    {
        return (totalSales * Commission::ThreePerCent ) / 100 ;
    }
    else
    {
        return 0;
    }
    
} 

void getCommision(float commision)
{
    cout << "The Commision is : " << commision << endl; 
}

int main()
{
    float TotalSales = setTotalSales();
    float Commision = CalculateCommission(TotalSales);
    getCommision(Commision);
    return 0;
}