#include<iostream>
using namespace std;
void Swap(int & num1, int &num2)
{
    int temp = num1;
    num1 = num2;
    num2 = temp;
}
int main()
{
    int num1 =10 ,num2 = 999;
    cout << "Number 1 =  " << num1 << " Number 2 = " << num2 << endl;
    Swap(num1,num2);
    cout << "Number 1 =  " << num1 << " Number 2 = " << num2 << endl;
    return 0;
}