#include <iostream>
using namespace std;
int x = 20; 

void Function()
{
    int x = 80 ;
    cout << "Value of x inside Function  : " << x << endl;
     
}

int main()
{
    int x = 10;
    cout << "Value of x in main : "<< x << endl;
    Function();
    cout << "The Globle X = " << ::x << endl;
}