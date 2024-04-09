#include <iostream>
using namespace std;
void SwapNumbers(short &Number1, short &Number2)
{
    short Temp = Number1;
    Number1 = Number2;
    Number2 = Temp;
}

void BeforeSwaping(short Number1, short Number2)
{
    cout << "Numbers Before Swapping : " << endl;
    cout << Number1 << endl;
    cout << Number2 << endl << endl;
}

short ReadNumber()
{
    short Num;
    cout << "Please Enter the Number : ";
    cin >> Num;
    cout << endl;
    return Num;
}

void AfterSwapping(short Number1, short Number2)
{
    cout << "Numbers After Swapping : " << endl;
    cout << Number1 << endl;
    cout << Number2 << endl << endl;
}

int main()
{
    short Number1, Number2;
    Number1 = ReadNumber();
    Number2 = ReadNumber();
        
    BeforeSwaping(Number1,Number2);
    SwapNumbers(Number1,Number2);
    AfterSwapping(Number1,Number2);
    
    return 0;
}