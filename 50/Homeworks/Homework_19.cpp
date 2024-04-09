#include<iostream>
using namespace std;

short ReadNum()
{
    short num;
    cout << "Plesae Enter the Number : ";
    cin >> num;
    while(num < 0)
    {
        cout << "Wrong Number, Please Enther a Posetive Number : ";
        cin >> num;
    }

    return num;
}

short SumNum(short &num, short &sum)
{
    return sum + num;
}

int main()
{
    return 0;
}