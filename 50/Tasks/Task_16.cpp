#include <iostream>
#include <cmath>
using namespace std;

short SetValue()
{
    short num;
    cout << "Please Enter the Value of Rectangle : ";
    cin >> num;
    return num;
}

short getArea(short S, short D)
{
    float Area = S * ( sqrt( pow( D, 2) - pow( S, 2) ) );
    return floor(Area);
}

void DisplayArea(float Area)
{
    cout << Area << endl;
}

int main()
{
    short SideOfRectangle = SetValue();
    short DiagonalOfRectangle = SetValue();
    float Area = getArea(SideOfRectangle,DiagonalOfRectangle);
    DisplayArea(Area);
    return 0;
}