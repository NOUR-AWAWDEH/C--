#include <iostream>
using namespace std;

void PrintShape()
{
    for(int i = 10 ; i >= 1 ; i--)
    {
        for(int j = 1 ; j <= i ; j++)
        {
            cout << j << " ";
        }
        cout << endl;
    }
}

int main()
{
    PrintShape();
    return 0;
}