#include <iostream>
using namespace std;

float setNumber(char numchar)
{
    float number ;
    cout << "Please Eter the Number" << numchar << " : ";
    cin >> number;
    return number;
}

char setOperator()
{
    char charResult;
    cout << "Please Choose One of this Operater type (+,-,*,/) : ";
    cin >> charResult;
    return charResult;
}

float Calculate( float num1, float num2, char math_operator)
{
    
    switch(math_operator)
    {
        case '+':
            return num1 + num2;
            break;

        case '-':
            return num1 - num2;
            break;

        case '*':
            return num1 * num2;
            break;

        case '/':
            return num1 / num2;
            break;

        default:
            cout << "\" "<< math_operator <<" \" The Operator in InVaild";
        return 0.0f;
    }

}

void getResult(float result)
{
    cout << "The Result is : " <<result << endl;
}

int main()
{
    float Number1 = setNumber('1');
    float Number2 = setNumber('2');
    char math_Operator = setOperator();
    float Result = Calculate(Number1,Number2,math_Operator);
    getResult(Result);
    return 0;
}