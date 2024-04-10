#include <iostream>
#include <cmath>
using namespace std;

void ReadTriangleData(float &A, float &B)
{
    
    cout << "Please Enter the Value of A : ";
    cin >> A;

    cout << "Please Enter the Value of B : ";
    cin >> B;   
}

float CircleAreaByITriangle(float a, float b)
{
  
    float Area = M_PI * ( pow(b,2) / 4 ) * ((  2 * a - b ) / (2 * a + b ) );
    return Area;
}

void PrintResult(float area)
{
    cout << "\n Circle Area: " << area << endl;
}

int main()
{
    float A, B;
    ReadTriangleData(A, B);
    PrintResult(CircleAreaByITriangle(A, B));

    return 0;
}