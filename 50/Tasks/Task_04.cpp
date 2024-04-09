#include<iostream>
using namespace std;

bool  EnterDriverLicense(bool &driverLicense)
{
    cout << "Please Enter => (0/1) if you have or have not DriverLicense : ";
    cin >> driverLicense;
    return driverLicense;
}

short EnterAge(short &age)
{
    cout << "Please Enter The Age : ";
    cin >> age;
    return age;
}

void HiredDecision(short age, bool driverLicense)
{
    if(age > 21 && driverLicense == 1)
    {
        cout << "Hired" << endl;
    }
    else
    {
        cout << "Rejecteed" << endl;
    }
}

int main()
{    
    
    short Age = EnterAge(Age);
    bool DriverLicense = EnterDriverLicense(DriverLicense);
    HiredDecision(Age, DriverLicense);

    return 0;
}

