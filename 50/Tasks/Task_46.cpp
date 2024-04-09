#include<iostream>
using namespace std;

void PrintLetters()
{
    int i = 65;
    while(i < 91)
    {
        cout << char(i) << endl;
        i++;
    }
}

int main()
{
    PrintLetters();
    return 0;
}