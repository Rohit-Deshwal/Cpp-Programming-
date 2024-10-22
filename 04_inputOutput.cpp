// Performing Input and Output using (cin) and (cout) Functions.

#include <iostream>
using namespace std;

int main()
{

    int age;
    string name;

    cout << "What is your Name :";
    cin >> name; // Taking name as input
    cout << "What is your age ";
    cin >> age; // Taking age as input

    cout << "Hello " << name << " your age is :" << age << endl;

    return 0;
}

// OUTPUT :-
// What is your Name :Rohit
// What is your age 19
// Hello Rohit your age is :19