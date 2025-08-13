

#include <iostream>
using namespace std;
#include <cmath>

// bool numberIsPrime(int n)
// {
//      bool isPrime = true;
//      for (int i = 2; i <= (int)sqrt(n); i++)
//      {
//           if (n % i == 0)
//           {
//                //   cout << "Not prime" << endl;
//                isPrime = false;
//                return 0; // Not prime
//           }
//      }
//      return isPrime;
// }

// void primeInNumbersList(int n)
// {
//      for (int i = 2; i < n; i++)
//      {
//           numberIsPrime(i);
//           if (numberIsPrime(i))
//           {
//                cout << i << " ";
//           }
//      }
// }

// int main()
// {
//      int n;
//      cout << "Enter a number: ";
//      cin >> n;
//      // bool myNum = numberIsPrime(n);
//      // if (myNum)
//      // {
//      //      cout << n << " is a prime number." << endl;
//      // }
//      // else
//      // {
//      //      cout << n << " is not a prime number." << endl;
//      // }
//      cout << "Prime numbers less than " << n << " are: ";
//      primeInNumbersList(n);
//      return 0;
// }

void fibonacci(int n)
{
     
}

int main(){
     int n;
     cout << "Enter a number: ";
     cin >> n;
     cout << "Fibonacci series up to " << n << " is: ";
     fibonacci(n);
     return 0; // Placeholder for main function
}