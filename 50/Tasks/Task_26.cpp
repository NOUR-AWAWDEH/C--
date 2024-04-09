#include <iostream>
using namespace std;

void CounterOutput(short num)
{
    int i = 1 ;
    while(i <= num)
    {
        cout << i << endl;
        i++;
    }
}

short setEndOfCounterNum()
{
    short number ;
    cout << "Please Enter the End Counter Number : ";
    cin >> number;
    while(number < 0)
    {
        cout << "Wrong Number, Please Enter a Positive number : ";
        cin >> number;
    }
    
    return number;
}

int main()
{
    short num = setEndOfCounterNum();
    CounterOutput(num);
    return 0;
}