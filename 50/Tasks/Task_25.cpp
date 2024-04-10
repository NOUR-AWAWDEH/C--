#include<iostream>
using namespace std;

int ReadAge()
{
    int age;
    cout << "Please Enter Age From 18 to 45 : ";
    cin >> age;

    return age;
}

bool ValidatedNumberInRange(int number, int from, int to)
{
    return (number >= from && number <= to);
}

int ReadUntilAgeBetween(int from, int to)
{
    int Age =0;

    do
    {
        Age = ReadAge();

    }while(!ValidatedNumberInRange(Age, from, to));
    
    return Age;
}

void PrintResult(int age)
{   

    cout <<"\nYour Age is : " << age<< endl;
    
}

int main()
{
    PrintResult(ReadUntilAgeBetween(18, 45));

    return 0;
}