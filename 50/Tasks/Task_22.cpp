#include <iostream>
#include <cmath>
#include <math.h>

using namespace std;
short GetA()
{
    short A;
    cout << "Please Enter the Value of A : ";
    cin >> A;
    return A;   
}

short GetB()
{
    short B;
    cout << "Please Enter the Value of B : ";
    cin >> B;   
    return B;  
}
float GetArea(short A, short B)
{
    float CAreaUP = ((2 * A) - B ); 
    float CAreaDown = ((2 * A) + B );    
    float CArea = (CAreaUP / CAreaDown);
    float Area = ((M_PI * pow(B,2)) / 4 ) * CArea;
    return Area;
}
void DisplayArea(float Area)
{
    cout << "Area: " << Area << endl;
}
int main()
{
    short A = GetA();
    short B = GetB();
    float Area = GetArea(A,B);
    DisplayArea(floor(Area));  
    return 0;
}