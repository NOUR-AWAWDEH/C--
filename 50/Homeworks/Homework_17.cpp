#include <iostream>
using namespace std;

void PrintShape()
{
    for(int i = 1 ; i <= 10 ;i++)
    {
        for(int j = i ; j <= 10; j++)
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