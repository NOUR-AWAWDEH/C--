#include <iostream>
#include <cmath>
using namespace std;


float setSquareArea()
{
    float SquareArea;
    cout << "Pleaes Enter Area value of the squar : " ;
    cin >> SquareArea;
    return SquareArea;
}

float setCircleArea(short SquareArea)
{
    return ( M_PI * pow(SquareArea,2) ) /  4; 
}

void getCircleArea(short CircleArea)
{
    cout << "The Circle Area is : " << ceil(CircleArea) << endl;
}

int main()
{
    short SquareArea = setSquareArea();
    short CircleArea = setCircleArea(SquareArea); 
    getCircleArea(CircleArea);
    return 0;
}