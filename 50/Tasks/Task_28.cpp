#include<iostream>
using namespace std;

short setNumber()
{
    short number ;
    cout << "Pease Enter the Number Value : ";
    cin >> number;
    while(number < 0)
    {
        cout << "Wrong Number, Please Enter a Positive Number : ";
        cin >> number;
    }
    return number;
}

short SumResult(short num)
{
    short sum = 0,i = 1 ;
    
    while( i < num )
    {
        sum += i;
        i++;
    }
    return sum;
}

int main()
{
    short number = setNumber();
    cout << SumResult(number) << endl;
    return 0;
}