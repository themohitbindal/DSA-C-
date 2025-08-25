#include <iostream>
#include <vector>
using namespace std;

int main()
{

    int target;
    cout << "Enter the target value: ";
    cin >> target; // Input the target value

    vector<int> arr = {10, 20, 30, 40, 50};
    int n = arr.size();
    int start = 0, end = n - 1;
    while (start <= end)
    {
        int mid = (end + start) / 2;
        // if (arr[arr.size() - 1] == target)
        // {
        //     return cout << "Element found at index: " << arr.size() - 1 << endl, 0; // Element found at the last index
        // }
        if (arr[mid] == target)
        {
            return cout << "Element found at index: " << mid << endl, 0; // Element found
        }
        else if (arr[mid] < target)
        {
            start = mid + 1; // Search in the right half
        }
        else
        {
            end = mid - 1; // Search in the left half
        }
    }

    return 0;
}