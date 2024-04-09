#include<iostream>
using namespace std;

short setNumber()
{
    short num,sum;
    while(num != -99)
    {
        cout<<"Wrong Number , Please Enter -99 : ";
        cin >> num;
        sum+=num;
    }
    return sum;
}
int main()
{
    cout << setNumber() << endl ;
    return 0;
}