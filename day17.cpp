#include <iostream>
#include <vector>
using namespace std;

int main()
{
    // int maxNum = INT16_MIN;
    // bool found = false;
    // int index = 0;
    // vector<int> arr = {7, 9, 12, 0, 1, 3, 4, 6};
    // while (!found)
    // {
    //     if (maxNum < arr[index])
    //     {
    //         maxNum = arr[index];
    //         index++;
    //     }
    //     else
    //     {
    //         found = true;
    //         int minNum = arr[index];
    //         return index;
    //     }
    // }

    vector<int> arr = {7, 9, 12, 0, 1, 3, 4, 6};
    int start = 0, end = arr.size() - 1;
    int mid = start + ((end - start) / 2);
    bool found = false;
    while (!found){
        if (arr[mid]>arr[start])
        {
            
        }
        
    }


    return 0;
}