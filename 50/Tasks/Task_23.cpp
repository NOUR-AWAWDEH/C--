#include <iostream>
#include <cmath>
using namespace std;
float ReadTriangleData(float &A, float &B, float &C)
{
    cout << "Enter Triangle Side of A : ";
    cin >> A;

    cout << "Enter Triangle Base of B : ";
    cin >> B;

    cout << "Enter Triangle Side of C : ";
    cin >> C;
   
}

float CircleAreaByATriangle(float A, float B, float C)
{
    float P;
    P  =  ( A + B + C ) / 2;

    float T;
    T = (A * B * C ) / (4 * sqrt(P * (P - A) * (P - B) * (P - C)));

    float Area = M_PI * pow(T, 2);

    return Area;
}

void PrintResult(float area)
{
    cout << endl << "The Circle Area : "<< area << endl;
}

int main()
{
    float A, B, C; 
    ReadTriangleData(A, B, C);
    PrintResult(CircleAreaByATriangle(A, B, C));

    return 0;
}