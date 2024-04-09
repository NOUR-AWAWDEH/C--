#include<iostream>
using namespace std;

enum enNumberType { 
    Odd  = 1,
    Even = 2
};

int ReadNumber()
{
    int num;
    cout << "Plese enter a number: ";
    cin >> num;
    return num;
}

enNumberType CheckNumberType(int num)
{
    int Result = num % 2;
    if(Result == 0)
        return enNumberType::Even;
    else
        return enNumberType::Odd;
}

void PrintNumberType(enNumberType numberType)
{
    if(numberType == enNumberType::Even)
        cout << "\n Number is Even. \n";
    else
        cout << "\nNumber is odd. \n";
}

int main()
{
    PrintNumberType(CheckNumberType(ReadNumber()));
    return 0;
}