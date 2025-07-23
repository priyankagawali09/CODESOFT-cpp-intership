/*Develop a calculator program that performs basic arithmetic
operations such as addition, subtraction, multiplication, and
division. Allow the user to input two numbers and choose an
operation to perform*/
#include <iostream>

using namespace std;
int main()
{
    double num1, num2;
    char ope;
    cout << "____Welcome in The Calculator Program____" << endl;
    cout << "Enter the 1st Number : ";
    cin >> num1;
    cout << "Enter the 2nd Number : ";
    cin >> num2;
    cout << "Enter the Operation (+,-,/,*) :";
    cin>>ope;
    switch (ope)
    {
    case '+':
        cout << "Result: " << num1 + num2 << endl;
        break;
    case '-':
        cout << "Result: " << num1 - num2 << endl;
        break;
    case '/':
        cout << "Result: " << num1 / num2 << endl;
        break;
    case '*':
        cout << "Result: " << num1 * num2 << endl;
        break;
    default:
        cout << "Invalid Operator!" << endl;
        break;
    }

    return 0;
}