#include <iostream>
using namespace std;

int main()
{
   /*There are three types of initilising a variable its value 
   1. int num1{12};    it gives an error if the value is float not int as defined type is int 
   2. int num2(13);    it does not gives error and decrease the floating point number to an integer 
   3. int num3 = 14;    */

   int num1{25};
   cout << "The Number is " << num1 << "\n";

   int num2{}; // holds a 0 as the value of num2 when printed
   cout << "The Number is " << num2 << "\n";

   int num3; // if printed holds a garbage value
   cout << "The Number is " << num3 << "\n";




   return 0;
}
