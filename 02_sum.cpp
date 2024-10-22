// Calculating the sum using Functions in C++

#include <iostream>
using namespace std;

// Defining a Function to sum two numbers
int sum(int num1, int num2)
{
    int sum = num1 + num2;                 // calculating the sum
    cout << "the sum is :" << sum << endl; // Printing the sum
    return sum;
}

int main()
{
    cout << "Printing the Sum..." << endl;

    sum(100, 50);

    return 0;
}