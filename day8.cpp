#include <iostream>

using namespace std;

// int main(){
//     int num[]= {1, 2, -3, 4, 5}; // Initialize an array with 5 integers
//     int size = 5; // Size of the array
//     int smallest = INT16_MAX;
//     int largest = INT16_MIN;
//     int smallestNumIndex = -1; // Initialize index for smallest number
//     int largestNumIndex = -1; // Initialize index for largest number
//     for (int i = 0; i < size; i++)

//     {
//        smallest = min(smallest, num[i]); // Find the smallest number

//        largest = max(largest, num[i]); // Find the largest number
//     }
//     for (int i = 0; i < size; i++)
//     {
//         if(num[i] == smallest) {
//             smallestNumIndex = i; // Store index of the smallest number
//         }
//         if(num[i] == largest) {
//             largestNumIndex = i; // Store index of the largest number
//         }
//     }

//     cout << "The smallest number is: " << smallest << endl; // Output the smallest number
//     cout << "The index of the smallest number is: " << smallestNumIndex << endl; // Output index of smallest number
//     cout << "The largest number is: " << largest << endl; // Output the largest number
//     cout << "The index of the largest number is: " << largestNumIndex << endl; // Output index of largest number

//     return 0; // Placeholder for day8.cpp
// }

// int targetArray(int n)
// {
//     int arr[] = {80, 6, 60, 50, 36, 52, 90};
//     int size = sizeof(arr) / sizeof(arr[0]); // Calculate the size of the array
//     for (int i = 0; i < size; i++)
//     {
//         if (arr[i] == n) // Check if the current element is greater than n
//         {
//             return i;
//         }
//     }
//     return -1; // Return -1 if no element is greater than n
// }

// int main()
// {
//     int n;
//     cout << "Enter an integer: "; // Prompt for input
//     cin >> n;                     // Read an integer input
//     int index = targetArray(n);   // Call the function to find the index
//     if (index == -1)
//     {
//         cout << "number not exists in array" << endl;
//     }
//     else
//     {
//         cout << "the index of number n is " << index << endl; // Output the index of the first element greater than n
//     }
//     return 0;
// }

// void swapArr(int arr[], int size) {
//     int swapedArr[]={};
//     for (int i = 0; i < size; i++) {
//        swapedArr[i] = arr[size - 1 - i]; // Swap elements
//     }
//     return swapedArr; // Return the swapped array

// }

// int main (){
//     int arr[] = {1, 2, 3, 4, 5}; // Initialize an array with 5 integers
//     int size = sizeof(arr) / sizeof(arr[0]); // Calculate the size of the
//     int swapedArr[] = swapArr(arr, size);
//     cout << swapedArr << endl; // Output the swapped array
// }

// void revArr(int arr[], int size) {
//    int start = 0, end = size - 1;
//    while (start<end){
//         swap(arr[start], arr[end]);
//         start++;
//         end--;
//    }

// }

// int main(){
//     int arr[] = {1, 2, 3, 0, 8};
//     int size = sizeof(arr) / sizeof(arr[0]);

//     revArr(arr, size);
//     for (int i = 0; i < size; i++)
//     {
//         cout << arr[i] << " "; // Output the reversed array
//     }

//     return 0;

// }

// sum of array elements and swap max and min elements in an array

// int sumOfArray(int arr[], int size) {
//     int sum = 0; // Initialize sum to 0
//     for (int i = 0; i < size; i++)
//     {
//         sum += arr[i]; // Add each element to sum
//     }
//     return sum; // Return the total sum

// }

// void swapMaxMin(int arr[], int size)
// {
//     int minNumber = INT16_MIN;
//     int maxNumber = INT16_MAX;
//     int index1 = -1; // Initialize index for minimum number
//     int index2 = -1; // Initialize index for maximum number
//     for (int i = 0; i < size; i++)
//     {
//         if (arr[i] < maxNumber)
//         {
//             maxNumber = arr[i]; // Find the maximum number
//             index1 = i;         // Store index of the minimum number
//         }
//         if (arr[i] > minNumber)
//         {
//             minNumber = arr[i]; // Find the minimum number
//             index2 = i;         // Store index of the maximum number
//         }
//     }
//     swap(arr[index1], arr[index2]);
// }

// int main()
// {
//     int arr[] = {1, 2, 3, 4, 5};             // Initialize an array with 5 integers
//     int size = sizeof(arr) / sizeof(arr[0]); // Calculate the size of the array
//     swapMaxMin(arr, size);
//     cout << "Array after swapping max and min: ";
//     for (int i = 0; i < size; i++)
//     {
//         cout << arr[i] << " "; // Output the array after swapping max and min
//     }
//     return 0; // Placeholder for day8.cpp
// }

// print all unique values in an array

// void printUnique(int arr[], int size)
// {
//     bool isUnique = true; // Flag to check uniqueness
//     for (int i = 0; i < size; i++)
//     {
//         isUnique = true; // Reset flag for each element
//         for (int j = 0; j < size; j++)
//         {
//             if (i != j && arr[i] == arr[j])
//             {
//                 isUnique = false; // If a duplicate is found, set flag to false
//                 break;            // Exit inner loop if duplicate is found
//             }
//         }
//         if (isUnique)
//         {
//             cout << arr[i] << " "; // Output the unique element
//         }
//     }
// }

// int main()
// {
//     int arr[] = {1, 2, 3, 4, 5, 1, 2};       // Initialize an array with integers
//     int size = sizeof(arr) / sizeof(arr[0]); // Calculate the size of the array

//     cout << "Unique elements in the array: ";
//     printUnique(arr, size); // Call the function to print unique elements
//     cout << endl;           // New line for better output formatting

//     return 0; // Placeholder for day8.cpp
// }

// WAF to print intersection of two arrays

// void printIntersection(int arr1[], int size1, int arr2[], int size2)
// {
//     // bool isIntersection = false; // Flag to check if intersection exists
//     for (int i = 0; i < size1; i++)
//     {
//         for (int j = 0; j < size2; j++)
//         {
//             if (arr1[i] == arr2[j])
//             {
//                 cout << arr1[i] << " "; // Output the intersecting element

//                 break; // Exit inner loop after finding an intersection
//             }
//         }
//     }
// }

// int main()
// {
//     int arr1[] = {1, 2, 3, 4, 5};               // First array
//     int arr2[] = {4, 5, 6, 7, 8};               // Second array
//     int size1 = sizeof(arr1) / sizeof(arr1[0]); // Size of first array
//     int size2 = sizeof(arr2) / sizeof(arr2[0]); // Size of second array

//     cout << "Intersection of the two arrays: ";
//     printIntersection(arr1, size1, arr2, size2); // Call the function to print intersection
//     cout << endl; // New line for better output formatting
//     return 0; // Placeholder for day8.cpp
// }

