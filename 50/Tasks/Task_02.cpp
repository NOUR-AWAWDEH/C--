#include<iostream>
#include<string>
using namespace std;

string ReadName()
{
    string Name;

    cout << "Please enter your name? "<< endl;
    getline(cin,Name);
    return Name;
}

void PrintName(string name)
{
    cout << "Your name is : "<< name << endl;
}

int main()
{
    PrintName(ReadName());

    return 0;
}
