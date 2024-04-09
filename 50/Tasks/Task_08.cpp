#include <iostream>
using namespace std; 

enum enPassFail {
    Paas = 1,
    Fail = 2
};

int ReadMark()
{
    int Mark;

    cout << "Please Enter Your Marck : " << endl;
    cin >> Mark;
    return Mark; 
}

bool CheckMark(int mark)
{
    if(mark >= 50)
        return enPassFail::Paas;
    else
        return enPassFail::Fail; 
}

void PrintResult( int mark)
{
    if(CheckMark(mark) == enPassFail::Paas)
        cout << "You Pass." << endl;
    else
        cout << "You Fail." << endl;
}

int main()
{
    PrintResult(ReadMark());
    return 0;
}