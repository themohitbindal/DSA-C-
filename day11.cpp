#include <iostream>
#include <vector>
using namespace std;
#include <algorithm> // For sort function

// finding the index of pair of numbers that sum to a given number

// int main()
// {

//     int n;
//     cout << "Enter the target number: ";
//     cin >> n;

//     vector<int> arr = {2, 15, 14, 7};
//     for (int i = 0; i < arr.size(); i++)
//     {
//         for (int j = i + 1; j < arr.size(); j++)
//         {
//             if (arr[i] + arr[j] == n)
//             {
//                 cout << "Pair found: " << arr[i] << " on index: " << i << " and " << arr[j] << " on index: " << j << endl;
//                 return 0; // Exit after finding the first pair
//             }
//         }
//     }

//     return 0;
// }

// (Pair Sum approach) of doing the same thing

// vector<int> pairSum(vector<int> arr, int target)
// {
//     vector<int> ans;
//     for (int i = 0; i < arr.size(); i++)
//     {
//         for (int j = i + 1; j < arr.size(); j++)
//         {
//             if (arr[i] + arr[j] == target)
//             {
//                 ans.push_back(i);
//                 ans.push_back(j);
//                 return ans;
//             }
//         }
//     }
// }

// int main()
// {
//     vector<int> arr = {2, 7, 11, 15};
//     int target = 26;
//     vector<int> result = pairSum(arr, target);
//     cout << "Pair found at indices: " << result[0] << " and " << result[1] << endl;
//     return 0;
// }

// 2 Pointers approach to find the pair sum

// vector<int> pairSum(vector<int> arr, int target)
// {
//     vector<int> ans;
//     int start = 0;
//     int end = arr.size() - 1;
//     while (start < end)
//     {
//         if (arr[start] + arr[end] == target)
//         {
//             ans.push_back(start);
//             ans.push_back(end);
//             return ans;
//         }
//         else if (arr[start] + arr[end] < target)
//         {
//             start++;
//         }
//         else
//         {
//             end--;
//         }
//     }
// }

// int main()
// {
//     vector<int> arr = {2, 7, 11, 15};
//     int target = 26;
//     vector<int> result = pairSum(arr, target);
//     cout << "Pair found at indices: " << result[0] << " and " << result[1] << endl;

//     return 0;
// }

// Majority Element

// int main()
// {
//     vector<int> arr = {2, 2, 1, 1, 1, 2, 2};
//     int majorityTimes = arr.size() / 2;
//     for (size_t i = 0; i < arr.size(); i++)
//     {
//         int times = 0;
//         for (int j = 0; j < arr.size(); j++)
//         {
//             if (arr[i] == arr[j])
//             {
//                 times++;
//             }
//         }
//         if (times >= majorityTimes)
//         {
//             cout << "Majority element is: " << arr[i] << endl;
//             return 0; // Exit after finding the first majority element
//         }
//     }

//     return 0;
// }

// // Majority element better approach
// int main()
// {
//     vector<int> arr = {1, 1, 2, 1, 2, 2, 2};
//     int majorityTimes = arr.size() / 2;
//     int n = arr.size();

//     sort(arr.begin(), arr.end());
//     int freq = 1;
//     int ans = arr[0];
//     for (int i = 1; i < n; i++)
//     {
//         if (arr[i] == arr[i - 1])
//         {
//             freq++;
//         }
//         else
//         {
//             freq = 1;
//             ans = arr[i];
//         }

//         if (freq >= majorityTimes)
//         {
//             return ans;
//         }
//     }
//     cout << "Majority element is: " << ans << endl;

//     return 0;
// }

// Majority element moore's voting algorithm

int main()
{
    vector<int> arr = {2, 1, 1, 1, 2, 1, 2, 1};
    int freq = 0;
    int ans = 0;
    for (int i = 0; i < arr.size(); i++)
    {
        if (freq == 0)
        {
            ans = arr[i];
            freq = 1;
        }
        else if (arr[i] == ans)
        {
            freq++;
        }
        else
        {
            freq--;
        }
    }
    cout << "Majority element is: " << ans << endl;

    return 0;
}