# include <iostream>
#include <cmath>
using namespace std;

float ReadDiameter()
{
    float  Diameter;
    cout << "Please Enter the Diameter Value : ";
    cin >> Diameter;
    return Diameter;
}

float CircleAreaByDiameter(float diameter)
{
    float Area = ( pow(diameter, 2) *  M_PI ) / 4 ;
    return Area;
}

void PrintResult(float area)
{
    cout << "The Area of the Circle : " << area << endl;
}

int main()
{
   PrintResult(CircleAreaByDiameter(ReadDiameter()));
       
    return 0;
}