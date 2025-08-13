#include <iostream>

using namespace std;
#include <vector>

// linear search using vector

// int targetArray(int n, vector<int> &arr)
// {
//     for (int i = 0; i < arr.size(); i++)
//     {
//         if (arr[i] == n)
//         {
//             return i; // Return the element if found
//         }
//         else
//         {
//             return -1; // Return -1 if no element is greater than n
//         }
//     }
// }

// int main()
// {
//     vector<int> arr = {80, 6, 60, 50, 36, 52, 90}; // Initialize a vector with integers
//     int n;
//     cout << "Enter an integer: "; // Prompt for input
//     cin >> n;
//     int index = targetArray(n, arr); // Call the function to find the index
//     if (index == -1)
//     {
//         cout << "number not exists in array" << endl; // Output if number does not exist
//     }
//     else
//     {
//         cout << "the index of number n is " << index << endl; // Output the index of the found element
//     }

//     return 0;
// }

// reverse code using vector

void revArr(vector<int> &arr)
{
    int start = 0, end = arr.size() - 1;
    while (start < end)
    {
        swap(arr[start], arr[end]); // Swap elements
        start++;
        end--;
    }
}

int main()
{
    vector<int> arr = {1, 2, 3, 4, 5};
    revArr(arr); // Call the function to reverse the array
    for (int i = 0; i < arr.size(); i++)
    {
        cout << arr[i] << " "; // Output the reversed array
    }
}