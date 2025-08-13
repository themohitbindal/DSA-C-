#include <iostream>
using namespace std;
#include <vector>

int main()
{
    int n = 5;
    vector<int> arr = {1, 2, 3, 4, 5};
    int maxSum = INT16_MIN;
    int currSum = 0;

    for (int val:arr)
    {
        currSum += val; 
        maxSum = max(maxSum, currSum);
        if (currSum < 0)
        {
            currSum = 0; // Reset current sum if it becomes negative
        }
    }
    cout << "Maximum subarray sum is: " << maxSum << endl;
}