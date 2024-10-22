// Taking input from user not by using cin but getline(cin,variableName)
// Because in cin it takes single word input and ignores the spaces 
// But in getline it takes many words as input including the white spaces.


#include <iostream>
using namespace std;

int main()
{

    string full_name;
    int age1;

    cout << "Please enter your full name :";
    getline(cin, full_name); // this statement is used to input the full name means name with spaces like Rohit Deshwal
    cout << "Please enter your age :";
    cin >> age1;

    cout << "Hello my friend " << full_name << " ,your age is " << age1<<".";

    return 0;
}

// OUTPUT :
// Enter your full name : Rohit Deshwal 
// Enter your age :21
//Hello my friend Rohit Deshwal ,Your age is 21.