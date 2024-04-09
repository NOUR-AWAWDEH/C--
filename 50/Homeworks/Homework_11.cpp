#include<iostream>
using namespace std;

struct stInfo
{
    string FirstName ;
    string LastName;
    short Age;
    string Phone;
};

void ReadInfo(stInfo &persion)
{
    cout << "Please Enter The First Name : ";
    cin >> persion.FirstName;
    cout << "Please Enter The Last Name : ";
    cin >> persion.LastName;
    cout << "Please Enter Age : ";
    cin >> persion.Age;
    cout << "Please Enter the Phone Number : ";
    cin >> persion.Phone;
    cout << endl;
}

void PrintInfo(stInfo persion)
{ 
    cout <<"****************************************" << endl;
    cout << "First Name : " << persion.FirstName << endl;
    cout << "Last Name : " << persion.LastName << endl;
    cout << "Age : " << persion.Age << endl;
    cout << "Phone : " << persion.Phone << endl;
    cout << "****************************************" << endl << endl;
}

void Printst(stInfo persion[100], short persionsNumber)
{
    for(int i = 0 ; i <= persionsNumber - 1 ; i++)
    {
        cout << "Persion Number [" << i +1 << "] :" << endl;
        PrintInfo(persion[i]);  
    }
    
}

short setPersionsNumber()
{
    short persionsNumber ;
    cout << "How many Persions you Want: ";
    cin >> persionsNumber;
    return persionsNumber;
}

void Readst(stInfo persion[100],short persionsNumber)
{
    for(int i = 0 ; i <= persionsNumber - 1  ; i++)
    {
        cout << "Persion Number ["<< i + 1<< "] : " << endl;
        ReadInfo(persion[i]);
    }
    
}

int main()
{
    stInfo Persion[100];
    short PersionNunper = setPersionsNumber();
    Readst(Persion,PersionNunper);
    Printst(Persion,PersionNunper);
    return 0;
}