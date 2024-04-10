#include <iostream>
using namespace std;

void ReadNumbers(float& a, float& b)
{
    cout << "Please Enter the Value of A : ";
    cin >> a;

    cout << "Please Enter the Value of B : ";
    cin >> b;
}

float CalculateRectangleArea(float a, float b)
{
    return a * b;
}

void PrintResult(float area)
{
    cout << "Rectangle Area is : " << area << endl;
}

int main()
{
    float A ,B;
    ReadNumbers(A,B);
    PrintResult(CalculateRectangleArea(A, B));

    return 0;
}