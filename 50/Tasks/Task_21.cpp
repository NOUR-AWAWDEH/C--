#include<iostream>
#include<cmath>
using namespace std;

float setCircumFerence()
{
    float Circumference;
    cout << "Please Enter the Circumference : ";
    cin >> Circumference;
    return Circumference;
}

float setCirclieArea(float Circumference)
{
    return (( pow( Circumference, 2 ) ) / ( 4 * M_PI ));
}

void getCircleArea(float CirclieArea)
{
    cout << "The Circle Area is " << floor(CirclieArea) << endl;
}

int main()
{    
    float Circumference = setCircumFerence();
    float CirclieArea = setCirclieArea(Circumference);
    getCircleArea(CirclieArea);
    
    return 0;
}