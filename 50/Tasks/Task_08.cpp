#include <iostream>
using namespace std; 

short setMark(short &mark)
{
    cout << "Please Enter Your Marck : " ;
    cin >> mark;
    return mark; 
}

void getResult( short mark)
{
    if(mark >= 50)
    {
        cout << "You Pass." << endl;
    }
    else
    {
        cout << "You Fail." << endl;
    }
}

int main()
{
    short Mark = setMark(Mark);
    getResult(Mark);
    return 0;
}