#include <iostream>
using namespace std;

// This program prints a pattern of characters based on user input
// int main(){

//     int n;
//     cout << "Enter a number: ";
//     cin >> n; // Input number

//     for( int i = 1; i <= n; i++) {

//         for ( int o = 1; o <= n; o++)
//         {
//             cout << char(o+64) << " "; // Print numbers from 1 to 4
//         }
//         cout << endl; // New line after each row
//     }
//     //  cout << char(65) << endl; // Print character 'B' as per the original code

//     return 0;
// }

// This program prints a pattern of characters based on user input
// int main(){

//     int n;
//     cout << "Enter a number: ";
//     cin >> n; // Input number
//     int myNum = 1;

//     for(int i = 1; i <= n; i++){

//         for(int j = 1; j <= n; j++){
//             cout << char(myNum+64) << " "; // Print the number 1
//             myNum++;
//         }
//         cout << endl; // New line after each row
//     }

//     return 0;
// }

// this is a program that prints a pattern of increasing characters based on user input
// int main() {

//     int n;
//     cout << "Enter a number: ";
//     cin >> n; // Input number
//     int myNum = 1;

//     for ( int i = 0; i < n; i++)
//     {
//         for (int j = 0; j < i+1; j++)
//         {
//             cout << char(myNum+64) << " "; // Print asterisks
//             myNum++;
//         }
//         cout << endl; // New line after each row

//     }

//     return 0;
// }

// making triangle pattern with difficult method
// int main(){

//     int n;
//     cout << "Enter a number: ";
//     cin >> n; // Input number

//     for (int i = 0; i < n; i++)
//     {
//         for (int k = 0; k < n-i; k++)
//         {
//             cout << " ";
//         }

//         for (int j = 0; j < i+1; j++)
//         {
//             cout << (j ? to_string(j) : " "); // Print spaces for the first character
//         }

//         cout << i+1; // Print numbers from 1 to n
//         // for (int k = 0; k < n; k++)
//         // {
//         // }

//          for (int j = 0; j < i+1; j++)
//         {
//             cout << (j ? to_string(i+1-j) : ""); // Print spaces for the first character
//         }

//         cout << endl; // New line after each row
//     }

//     return 0;
// }

// another way to print triangle pattern
// int main()
// {

//     int n;
//     cout << "Enter a number: ";
//     cin >> n; // Input number

//     for (int i = 0; i < n; i++)
//     {
//         for (int k = 0; k < n - i; k++)
//         {
//             cout << " "; // Print spaces for alignment
//         }

//         for (int j = 0; j < i + 1; j++)
//         {
//             cout << j + 1;
//         }

//         for (int l = 0; l < i+1; l++)
//         {
//             // cout << (l ? to_string(l) : " ");
//             if(l != 0){
//                 cout << l; // Print space between numbers
//             }
//         }

//         cout << endl; // New line after each row
//     }

//     return 0;
// }

// diamond pattern print

int main()
{
    int n;
    cout << "Enter a number: ";
    cin >> n;         // Input number
    int newN = n - 1; // Adjusted for the diamond pattern

    for (int i = 0; i < n; i++)
    {
        // upper triangle
        for (int j = 0; j < n - i; j++)
        {
            cout << " ";
        }
        for (int j = 0; j < i + 1; j++)
        {
            if (j == 0)
            {
                cout << "*"; // Print space between numbers
            }
            else
            {
                cout << " "; // Print space between numbers
            }
        }

        for (int l = 1; l < i; l++)
        {
            cout << " "; // Print asterisks
        }

        for (int k = 0; k < i; k++)
        {
            if (k == 0)
            {
                cout << "*"; // Print space between numbers
            }
            else
            {
                cout << " "; // Print space between numbers
            }
        }

        cout << endl; // New line after each row
    }

    for (int i = 0; i < newN; i++)
    {
        for (int j = 1; j < i+2; j++)
        {
            cout << " "; // Print spaces for alignment
        }
        for (int k = 0; k < newN-2; k++)
        {
            if (k == 0)
            {
                cout << " "; // Print space between numbers
            }
            
            // else
            // {
            //     cout << " "; // Print space between numbers
            // }
        }

        
        cout << "*"; // Print asterisks
        
        for (int k = 0; k < newN-i-1; k++)
        {
            cout << " "; // Print spaces for alignment
        }
        for (int k = 0; k < newN-i-2; k++)
        {
            cout << " "; // Print spaces for alignment
        }
        cout << "*"; // Print asterisks
        

        cout << endl; // New line after each row
    }

    return 0; // Placeholder return statement
}