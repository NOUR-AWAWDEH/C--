#include<iostream>
using namespace std;

struct stInfo
{
     int Age;
     bool HasDrivingLicense;
     bool HasRecommandation;
};

stInfo ReadInfo()
{
    stInfo Info;

    cout << "please Enter Your Age? " << endl;
    cin >> Info.Age;
    cout << "Do you have driver License? " << endl;
    cin >> Info.HasDrivingLicense;
    cout << "Do you have Recommandation? " << endl;
    cin >> Info.HasRecommandation;

    return Info;
}

bool IsAccepted(stInfo info)
{
    if(info.HasRecommandation)
    {
        return true;
    }
    else
    {
        return (info.Age > 21 && info.HasDrivingLicense);
    }
}

void PrintResult(stInfo info)
{
    if(IsAccepted(info))
        cout << "\n Hired" << endl;
    else
        cout << "\n Rejected"<< endl;

}

int main()
{
    PrintResult(ReadInfo());
    
    return 0;
}