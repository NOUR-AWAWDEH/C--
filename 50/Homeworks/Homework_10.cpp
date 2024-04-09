#include <iostream>
using namespace std;

void setGrade(short grades[3])
{
    cout << "Please Enter the Grade1 : ";
    cin >> grades[0];
     cout << "Please Enter the Grade2 : ";
    cin >> grades[1];
     cout << "Please Enter the Grade3 : ";
    cin >> grades[2];
    
}

float setAvarageOfGrade(short grades[3])
{
    return float( grades[0] + grades[1] + grades[2] ) / 3.0f ;
}

void getAvarageOfGrade(float Avarage)
{
    cout << "The Average Of Grades is : " << Avarage << endl;
}

int main()
{
    short Grades[3];
    setGrade(Grades);

    float Avarage = setAvarageOfGrade(Grades);
    getAvarageOfGrade(Avarage);
    return 0;
}