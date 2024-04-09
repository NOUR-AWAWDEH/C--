#include <iostream>
using namespace std;

int main()
{
    short Mark1, Mark2, Mark3;
    cout << "Please Write The follwing Marks : " << endl;
    cout << "Mark Number 1 : ";
    cin >> Mark1;
    cout << "Mark Number 2 : ";
    cin >> Mark2;
    cout << "Mark Number 3 : ";
    cin >> Mark3;

    float Avarage = (Mark1 + Mark2 + Mark3 ) /3;
    cout << "The Avarage Marks is : " << Avarage <<  "%" <<endl <<endl;
    return 0;
}