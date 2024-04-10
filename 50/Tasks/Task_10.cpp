#include<iostream>
using namespace std;

void ReadMarks(int &mark1, int &mark2, int &mark3)
{
    cout << "Please Enter your Mark 1 : " << endl;
    cin >> mark1;

    cout << "Please Enter your Number 3 : " << endl;
    cin >> mark2;

    cout << "Please Enter your Mark 2 : " << endl;
    cin >> mark3;

}

int SumOf3Marks(int mark1,int mark2, int mark3)
{
    return mark1 + mark2 + mark3;
}

float CalculateAverage(int mark1, int mark2, int mark3)
{
    return ( (float)SumOf3Marks(mark1, mark2, mark3) / 3 );
}

void PrintResult(int total)
{
    cout << "\nThe Total Average of Marks is: " << total << endl;
}

int main()
{
    int Mark1, Mark2, Mark3;
    ReadMarks(Mark1, Mark2, Mark3);
    PrintResult(CalculateAverage(Mark1, Mark2, Mark3));

    return 0;
}