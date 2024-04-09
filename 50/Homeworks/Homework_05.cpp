#include<iostream>
#include<string>
using namespace std;

int main()
{ 
    string str1,str2,str3;
    cout << "Please Enter The String1 : ";
    getline(cin,str1);

    cout <<"Please Enter The String2 : ";
    cin >> str2;

    cout <<"Please Enter The String3 : ";
    cin >> str3;

    cout << endl <<"****************************************"<< endl;
    cout << "The Length of th String is : " << str1.length() <<endl;
    cout << "Characters at 0, 2, 4, 7 are :  " << str1[0] << " " << str1[2] << " " << str1[4] << " " << str1[7] << endl;
    cout << "Concatenating Strin2 are string3 = " << str2 + str3 << endl;
    cout << str2 << " * " << str3 <<" = " << stoi(str2) * stoi(str3) << endl;  
    cout << "****************************************" << endl << endl;

    return 0;
}