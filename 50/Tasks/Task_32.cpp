#include<iostream>
#include<cmath>
using namespace std;

short setNumber()
{
    short Number;
    cout << "Please Enter the Number : ";
    cin >> Number;

    while(Number < 0 )
    {
        cout << "Wrong Number , Please Enter Right Power Number : ";
        cin >> Number;
    }

    return Number;
}

short setPowers()
{
    short Power;
    
    cout << "Please Enter the Power : ";
    cin >> Power;
    while(Power < 0 )
    {
        cout << "Wrong Power Number , Please Enter a Positive Number : ";
        cin >> Power;
    }
    return Power;
}

short getPowResult(short num, short power)
{
    short result;
    if(power == 0 ) return 1;

    while(power > 0)
    {
        result*= num;
        power--;

    }
    return result;
}


int main ()
{
    short Number = setNumber()
    ,Power = setPowers();
    cout << getPowResult(Number, Power) << endl;
    return 0;
}