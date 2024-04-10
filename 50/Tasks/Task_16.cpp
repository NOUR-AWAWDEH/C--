#include <iostream>
#include <cmath>
using namespace std;

void ReadNumbers(float &side, float &diagonal)
{
    cout << "Please Enter the Value of the Side Rectangle : ";
    cin >> side;

    cout << "Please Enter the Value of the Diagonal Rectangle : ";
    cin >> diagonal;
}

float CalculateAreaBySideAndDiagonal(float side, float diagonal )
{
    float  Area = side * (sqrt(pow(diagonal, 2) - pow(side, 2)));
    return Area;
}

void PrintResult(float area)
{
    cout << "The Area Of the Rectangle is : " << area << endl;
}

int main()
{
    float SideOfRectangle, DiagonalOfRectangle;
    ReadNumbers(SideOfRectangle, DiagonalOfRectangle);
    PrintResult(CalculateAreaBySideAndDiagonal(SideOfRectangle, DiagonalOfRectangle));
    return 0;
}