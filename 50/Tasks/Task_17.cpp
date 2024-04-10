#include <iostream>
using namespace std;

void ReadNumbers(float &base, float &high)
{
    cout << "Please Enter the Value of the Base Triangle : "<< endl; 
    cin >> base;

    cout << "Please Enter the Value of the High Triangle : "<< endl;
    cin >> high;
}

float TriangleArea(float base, float high)
{
    float Area = (base * high) / 2;

    return Area;
}

void PrintResult(float area)
{
    cout << "\nThe Triangle Area Is : " << area << endl; 
}

int main()
{
    float Base , High;
    ReadNumbers(Base, High);
    PrintResult(TriangleArea(Base, High));
    
    return 0;
}