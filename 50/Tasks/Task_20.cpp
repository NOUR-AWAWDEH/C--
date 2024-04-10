#include <iostream>
#include <cmath>
using namespace std;


float ReadSquarSide()
{
    float SquarSide;
    cout << "Pleaes Enter the Value of the Squar Side : " ;
    cin >> SquarSide;
    return SquarSide;
}

float CircleAreaInscribedInSquare(float squareArea)
{
    return ( M_PI * pow(squareArea, 2 ) ) /  4; 
}

void PrintResult(float circleArea)
{
    cout << "The Circle Area is : " << circleArea << endl;
}

int main()
{
     
    PrintResult(CircleAreaInscribedInSquare(ReadSquarSide()));

    return 0;
}