#include <iostream>
#include<cmath>

using namespace std;

short setNumber()
{
    short Number ;
    cout << "Please Enter the Number Value : ";
    cin >> Number ;
}

short setMl(short x, short y)
{
    return x * y ;
}

void getResult(short result)
{
    cout << result << endl;
}

int main()
{
    
    short Number = setNumber()
    ,result = pow(Number,2);

    getResult(result);
    result = setMl(Number,result);
    getResult(result);
    result = setMl(Number,result);
    getResult(round(result));

    return 0;
}