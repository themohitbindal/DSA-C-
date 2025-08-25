#include <iostream>
#include <vector>
using namespace std;

void changeA(int* ptr)
{
    *ptr = 20; // Change the value of variable 'a' using pointer
}

int main()
{

    int arr[5] = {10, 20, 30, 40, 50};
    int* ptr = arr; // Pointer to the first element of the array
    cout << *(arr+1) << endl; // Print the address of the first element

    return 0;
}