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

short EvenSumResult(short num)
{
    short sum = 0 , i = 0;

    while(i < num)
    {
        sum+=i;
        i = i + 2;
    }
    sum = sum + num;
    return sum;
}

int main()
{
    short number = setNumber();
    cout << EvenSumResult(number) << endl;
    return 0;
}