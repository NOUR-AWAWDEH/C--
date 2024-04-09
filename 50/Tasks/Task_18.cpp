#include <iostream>
#include <cmath>
using namespace std;

short setRadiusValue()
{
    short Radius;
    cout << "Please Enter the Value of the Circle Radius : ";
    cin >> Radius;
    return Radius;
}

float getArea( short Radius)
{
    return M_PI * pow(Radius,2);
}

void DisplayArea(short Area)
{
    cout << ceil(Area) << endl;
}

int main()
{
    short Radius = setRadiusValue();
    float Area = getArea(Radius);
    DisplayArea(Area);    
    return 0;
}