#include<iostream>
using namespace std;

int ReadAge()
{
    int age;
    cout << "Please Enter Your Age : ";
    cin >> age;

    return age;
}

bool ValidatedNumberInRange(int number, int from, int to)
{
    return (number >= from && number <= to);
}

void PrintResult(int age)
{
    if(ValidatedNumberInRange(age, 18, 45))    
        cout << age <<" is a Valid Age" << endl;
    else
        cout << age <<" is Invalid Age" << endl;
    
}

int main()
{
    PrintResult(ReadAge());

    return 0;
}