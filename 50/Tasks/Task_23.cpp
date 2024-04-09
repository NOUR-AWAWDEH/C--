#include <iostream>
#include <cmath>
using namespace std;
short setA()
{
    short A;
    cout<<"Enter the value of A: ";
    cin>>A;
    return A;   
}

short setB()
{
    short B;
    cout<<"Enter the value of B: ";
    cin>>B;
    return B;
}

short setC()
{
    short C;
    cout<<"Enter the value of C: ";
    cin>>C;
    return C;
}

float setArea(short A, short B, short C)
{
    float P =  ( A + B + C ) / 2;
    float T = sqrt( P * ( P - A ) * ( P - B ) * ( P - C ) );
    float R = ( A * B * C );
    float AreaOfTreangle =  R / ( 4 * T );
    float Area = M_PI * pow(AreaOfTreangle,2);
    return Area;
}

void getArea(float Area)
{
    cout << endl << round(Area) << endl;
}
int main()
{
    short A = setA();
    short B = setB();
    short C = setC();
  
    float Area = setArea(A,B,C);
    getArea(Area);
    return 0;
}