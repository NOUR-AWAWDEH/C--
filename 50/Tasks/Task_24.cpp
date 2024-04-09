#include<iostream>
using namespace std;

short setAge(short &age)
{
    cout << "PleaseEnter Your Age : ";
    cin >> age;
    return age;
}

void getResult(short age)
{
    if(age >= 18 && age <= 45)
    {
        cout << "Valid Age";
    }
    else
    {
        cout << "Invalid Age";
    }
}

int main()
{
    short Age = setAge(Age);
    getResult(Age);   
    return 0;
}