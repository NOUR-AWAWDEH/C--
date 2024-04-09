#include<iostream>
using namespace std;

void ReadNumbers(int &mark1, int &mark2, int &mark3)
{
    cout << "Please Enter your Number 1 : " << endl;
    cin >> num1;

    cout << "Please Enter your Number 2 : " << endl;
    cin >> num2;

    cout << "Please Enter your Number 3 : " << endl;
    cin >> num3;
}

int SumOf3Marks(int mark1,int mark2, int mark3)
{
    return num1 + num2 + num3;
}

float CalculateAverage(int mark1, int mark2, int mark3)
{
    return (float)SumOf3Marks(mark1, mark2, mark3) / 3;
}

void PrintResult(int total)
{
    cout << "\nThe Total Sum of Numbers is: " << total << endl;
}

int main()
{
    int Mark1, Mark2, Mark3;
    ReadNumbers(Mark1, Mark2, Mark3);
    PrintResult(SumOf3Marks(Mark1, Mark2, Mark3));

    return 0;
}