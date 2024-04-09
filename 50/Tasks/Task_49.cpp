#include<iostream>
using namespace std;
short setATMPIN()
{
    short PIN;
    cout << "Please Enter the PIN : ";
    cin >> PIN;
    return PIN;
}

void getBalance(short pin)
{
    if(pin == 1234)
    {
        cout << "You Balance is : " << 7000 << endl;
    }
    else
    {
        cout << "Wrong PIN" << endl;
    }
}

int main()
{
    short PIN = setATMPIN();
    getBalance(PIN);
    return 0;
}