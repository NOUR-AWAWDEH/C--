#include<iostream>
using namespace std;

short setNumber()
{
    short number;
    cout << "Please enter the value of the number : ";
    cin >> number;
    while(number < 0)
    {
        cout << "Worng number, Please Enter A Positive Number : ";
        cin >> number;
    }
    return number;
}

short CalculatFactorial(short num)
{
    short result = 1 ;

    for(int i = num ; i >= 1 ;i--)
    {
        result *= i;
    }
    return result;
}

int main()
{
    short number = setNumber();
    cout << CalculatFactorial(number) << endl;
    return 0;
}