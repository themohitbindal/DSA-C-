// we include the iostream because we are telling the compiler that there is a fie called iostream where logic is written for cout (currently it doesnot know what count does)
//(ToDo: we will learn about this later)
#include <iostream>
using namespace std; // this is used to avoid writing std:: before cout, cin, etc.

// here we say that we want to run this function whenver this file is called
int main()
{
    // cout << "Hello, World!\n from mohit";
    int a,b ;
    cout << "enter a";
    cin >> a; // this is used to take input from the user and store it in variable a
    cout << "enter b";  
    cin >> b; // this is used to take input from the user and store it in variable b
    cout << "sum is " << a + b; // this is used to print the
    
    return 0; // this is used to tell the compiler that the program has run successfully (we are returning zero because it is int function)
}
