#include<iostream>
using namespace std;

struct stInfo
{
    string FistName;
    string LastName;
};

stInfo ReadInfo()
{
    stInfo Info;

    cout << "Please Enter Your FirstName?" << endl;
    cin >> Info.FistName;
    cout << "Please Enter Your LastName?" << endl;
    cin >> Info.LastName;
    
    return Info;
}

string GetFullName(stInfo Info, bool Reverse)
{
    string FullName = "";
    if(Reverse)
        FullName = Info.LastName + " " + Info.FistName;
    else
        FullName = Info.FistName + " " + Info.LastName;
    return FullName;
}

void PrintFullName(string fullName)
{
    cout << "\n Your full name is: " << fullName << endl;
}

int main()
{
    PrintFullName(GetFullName(ReadInfo(),true));
    return 0;
}