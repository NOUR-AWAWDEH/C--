#include <iostream>

using namespace std;

int main()
{
    short NumberA,NumberB;
    bool A = 0 ,B = 1;

    cout << endl <<"Please Enter he First Number A : ";
    cin >> NumberA;
    cout<<"Please Enter the Second Number B : ";
    cin >> NumberB;

    cout << NumberA << " = " << NumberB << " is " << (NumberA == NumberB) << endl;
    cout << NumberA << " != " << NumberB << " is " << (NumberA != NumberB) << endl;
    cout << NumberA << " > " << NumberB << " is " << (NumberA > NumberB) << endl;
    cout << NumberA << " < " << NumberB << " is " << (NumberA < NumberB) << endl;
    cout << NumberA << " >= " << NumberB << " is " << (NumberA >= NumberB) << endl;
    cout << NumberA << " <= " << NumberB << " is " << (NumberA <= NumberB) << endl;

    cout << "!A is " << !A << endl;
    cout << "!B is " << !B << endl;
    cout << A << " && " << B << " is " << (A && B) << endl;
    cout << A << " || " << B << " is " << (A || B) << endl;

    return 0;
}