#include<iostream>
#include<cmath>
using namespace std;

float ReadCircumference()
{
    float Circumference;
    cout << "Please Enter the Circumference : ";
    cin >> Circumference;
    return Circumference;
}

float CircleAreaByCircumferance(float circumference)
{
    return (( pow( circumference, 2 ) ) / ( 4 * M_PI ));
}

void PrintResult(float circlieArea)
{
    cout << "The Circle Area is " << circlieArea << endl;
}

int main()
{    
    PrintResult(CircleAreaByCircumferance(ReadCircumference()));
           
    return 0;
}