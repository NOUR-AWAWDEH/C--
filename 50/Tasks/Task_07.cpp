#include<iostream>
#include<string>

using namespace std;

int ReadNumber()
{
    int num ;
    cout << "Please Enter the Number : " << endl;
    cin >> num;

    return num; 
}

float CalculateHalfNumber(int num)
{
    return (float) num / 2;
}

void PrintResult(int num)
{
    string Result = "Half of " + to_string(num) + " is "+ to_string(CalculateHalfNumber(num));
    cout << endl << Result << endl;
}

int main()
{
    PrintResult(ReadNumber());

    return 0;
}