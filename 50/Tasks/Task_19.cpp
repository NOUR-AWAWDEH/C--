# include <iostream>
#include <math.h>
using namespace std;

short setDiameter()
{
    short  Diameter;
    cout << "Please Enter the Diameter Value : ";
    cin >> Diameter;
    return Diameter;
}

float setArea(short Diameter)
{
    return ( M_PI * Diameter * Diameter ) / 4 ;
}

void getArea(float Area)
{
    cout << "The Area of the Circle : " << ceil(Area) << endl;
}

int main()
{
   
    short  Diameter = setDiameter();
    float Area = setArea(Diameter);
    getArea(Area);
    
    return 0;
}