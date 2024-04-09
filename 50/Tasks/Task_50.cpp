#include<iostream>
#include<string>
using namespace std;



enum enTryLimit{
    TryLimit = 3
};

short ReadPIN()
{
    short PIN;
    cout << "Please Enter Your PIN : ";
    cin >> PIN;
    return PIN;
}

bool TryPIN(short &PIN)
{
   
    if(PIN == 1234) return 1;
    short userTryed = 2;
    while(PIN != 1234)
    {
        cout << "Wrong PIN Number ,";
        PIN = ReadPIN();
        userTryed++;
        if(userTryed > enTryLimit::TryLimit)
        {
            break;
        }
    }
      
    return 0;
}

string ReadBalance ()
{
    int Balance = 7500;
    string str = "Your Balance is :" + to_string(Balance); 
    return str; 
}

string CardSetuation(bool triedPIN)
{
    if(triedPIN == 0)
    {
        return "Card is locked!";
    }
    else
    {
        return ReadBalance();
    }
}

int main()
{
    short PIN = ReadPIN();
    cout << CardSetuation(TryPIN(PIN)) << endl;

    return 0;
}