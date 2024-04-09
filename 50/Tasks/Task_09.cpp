#include<iostream>
using namespace std;

void ReadNumber(int &num1, int &num2, int &num3)
{
    cout << "Please Enter your Number 1 : " << endl;
    cin >> num1;

    cout << "Please Enter your Number 2 : " << endl;
    cin >> num2;

    cout << "Please Enter your Number 3 : " << endl;
    cin >> num3;
}

int SumOf3Numbers(int num1,int num2, int num3)
{
    return num1 + num2 + num3;
}

void PrintResult(int total)
{
    cout << "\nThe Total Sum of Numbers is: " << total << endl;
}

int main()
{
    int Num1, Num2, Num3;
    ReadNumber(Num1, Num2, Num3);
    PrintResult(SumOf3Numbers(Num1, Num2, Num3));

    return 0;
}