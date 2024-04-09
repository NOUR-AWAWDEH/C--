#include <iostream>
using namespace std;

short getArea(int A, int B)
{
    return A * B;
}

void DisplayArea(short Area)
{
    cout << "The Area of the Rectangle is : " << Area << endl;
}

short setValueOfNumber()
{
    short num;
    cout << "Please Enter the Value : ";
    cin >> num;

    return num;
}

int main()
{
    short A = setValueOfNumber();
    short B = setValueOfNumber();

    short Area = getArea(A,B);
    DisplayArea(Area); 
    return 0;
}