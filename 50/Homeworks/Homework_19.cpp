#include<iostream>
using namespace std;

short ReadNum()
{
    short num;
    cout << "Plesae Enter the Number : ";
    cin >> num;
    while(num < 0)
    {
        cout << "Wrong Number, Please Enther a Posetive Number : ";
        cin >> num;
    }

    return num;
}

short SumNum(short &num, short &sum)
{
    return sum + num;
}


short Input()
{
    short sum = 0, num, counter = 0;
    while (counter < 5)
    {
        num = ReadNum();
        if(num > 50)
        {
            cout << "The Number is grater than  50, and won't be calculated."<< endl;
            continue;
        }
        sum = SumNum(num,sum);
        counter++;

    }
    
    return sum;
}



int main()
{
    short Sum = Input();
    cout << Sum;
    return 0;
}