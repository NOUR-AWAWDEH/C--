#include<iostream>
using namespace std;

void ReadNumbers(int &A, int &B, int &C)
{
    cout << " Please Enter the Number of A " << endl;
    cin >> A;
    cout << " Please Enter the Number of B " << endl;
    cin >> B;
    cout << " Please Enter the Number of C " << endl;
    cin >> C;
}

int MaxOf3Numbers(int a, int b, int c)
{
    if(a > b)
        if(a > c)
            return a;
        else
            return c;

    else
        if(b > c)
            return b;
        else
            return c;
}

void PrintResults(int max)
{
    cout << "\nThe Maximum Number is: " << max << endl;
}

int main()
{
    int A,B,C;
    ReadNumbers(A, B, C);
    PrintResults(MaxOf3Numbers(A, B, C));
    
    return 0;
}