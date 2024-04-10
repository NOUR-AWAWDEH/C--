#include <iostream>
#include <cmath>
using namespace std;

float ReadRadious()
{
    float Radius;
    cout << "Please Enter the Value of the Circle Radious : ";
    cin >> Radius;
    return Radius;
}

float CircleArea( float Radius)
{
    return M_PI * pow(Radius,2);
}

void PrintResult(float Area)
{
    cout << "\nThe Circle Area is : " << Area << endl;
}

int main()
{
    PrintResult(CircleArea(ReadRadious()));

    return 0;
}