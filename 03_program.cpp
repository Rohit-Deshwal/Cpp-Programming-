// Here all we done is practice to add to numbers using variables and addition using function.

#include <iostream>
using namespace std;

int addition(int a, int b) // Definition of the function
{
    int add = a + b;
    cout << "the addition is : " << add << endl;
}

int main()
{
    int number1 = 19;
    int number2 = 28;

    cout << "the Number1 is :" << number1 << endl;
    cout << "the Number2 is :" << number2 << endl;
    int sum = number1 + number2;
    cout << "the Sum is :" << sum << endl;

    addition(23, 98);

    return 0;
}