#include<iostream>
#include<string>
using namespace std;
void MyName()
{
    string Name;
    cout << "Please Enter Your Name : ";
    getline(cin,Name);
    cout << Name << endl;
}

int main()
{
    MyName();
    return 0;
}
