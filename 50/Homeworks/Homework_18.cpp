#include<iostream>
using namespace std;

short SearchNum(short arr[10],short length)
{
    for (int i = 0; i < length -1 ; i++)
    {
        if (arr[i] == 20)
        {
            return arr[i];
        }
    }
    return 0;
}

int main()
{
    short arr[10] = {10,20,44,55,33,22,99,88,99,100};
    short arrnum = SearchNum(arr,10);
    cout << arrnum << endl;
    return 0;
}