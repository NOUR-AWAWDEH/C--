#include <iostream>
using namespace std;

void ReadNumbers(int& num1,int& num2)
{
    cout <<"Please Ether the Value of the Number 1 : ";
    cin >> num1;

    cout <<"Please Ether the Value of the Number 2 : ";
    cin >> num2;
}

int MaxOf2Numberes(int num1, int num2)
{
    if(num1 > num2)
        return num1;
    else
        return num2;
}

void PrintResults(int max)
{
    cout << "\nThe Maximum Number is : " << max << endl; 
}


int main()
{
    int Num1 , Num2;
    ReadNumbers(Num1, Num2);
    PrintResults(MaxOf2Numberes(Num1, Num2));

    return 0;
}