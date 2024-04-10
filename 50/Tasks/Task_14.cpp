#include <iostream>
using namespace std;
void SwapNumbers(int& num1, int& num2)
{
    int Temp = num1;
    num1 = num2;
    num2 = Temp;
}

void PrintNumbers(int num1, int num2)
{
    cout << "Number 1 : "<< num1 << endl;
    cout << "Number 2 : "<< num2 << endl;
}

void ReadNumbers( int& num1, int& num2)
{
    
    cout << "Please Enter the Number 1: ";
    cin >> num1;
    
    cout << "Please Enter the Number 2: ";
    cin >> num2;
}

void AfterSwapping(int Number1, int Number2)
{
    cout << "Numbers After Swapping : " << endl;
    cout << Number1 << endl;
    cout << Number2 << endl << endl;
}

int main()
{
    int Number1, Number2;
    ReadNumbers(Number1, Number2);
        
    PrintNumbers(Number1, Number2);
    SwapNumbers(Number1, Number2);
    PrintNumbers(Number1,Number2);
    
    return 0;
}