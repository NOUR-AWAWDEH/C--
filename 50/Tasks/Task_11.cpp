#include<iostream>
using namespace std;

short setMark(short &mark, short num)
{    
    cout << "Please Enter The Mark"<< num << " : ";
    cin >> mark;
    return mark;
}

void setMarks(short marks[3])
{
    setMark(marks[0],1);
    setMark(marks[1],2);
    setMark(marks[2],3);
}

void getAverage(float average)
{
    cout << average << endl;;
}

float setAverage(short marks[3])
{
    return ( marks[0] + marks[1] + marks[2] ) / 3;
}

void getResult(float average)
{
    if(average >= 50.0f)
    {
        cout << "PASS";
    }
    else
    {
        cout << "FAIL";
    }
}

int main()
{
    short Marks[3];
    setMarks(Marks);
    float Average = setAverage(Marks);
    getAverage(Average);
    getResult(Average);

    return 0;
}