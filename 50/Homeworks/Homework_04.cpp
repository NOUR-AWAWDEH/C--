#include <iostream>
#include <string>
using namespace std;

int main()
{
    string st1 = "43.22";
    cout << "Convert String To Double : "<< stod(st1) << endl; 
    cout << "Convert String To Float : " << stof(st1) << endl;
    cout <<"Convert String To Int : " << stoi(st1) << endl << endl;

    int N1 =20;
    cout << "Convert Integer to String : "<< to_string(N1) << endl << endl ;

    double N2 = 33.5;
    cout << "Convert Double to String : " << to_string(N2) << endl << endl;

    float N3 = 55.23;
    cout << "Convert Float Number To String : " << to_string(N3) << endl;
    cout << "Convert Float Number To Interger C Style : " << (int)N3 << endl;
    cout << "Convert Float Number To Interger Function Style : " <<int(N3) << endl;

    return 0;
}