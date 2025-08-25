#include <iostream>
#include <vector>
using namespace std;

bool validAnswer(int mid, vector<int> &arr, int m, int n)
{
    int student = 1;
    int pageSum = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] > mid)
        {
            return false;
        }

        if (pageSum + arr[i] <= mid)
        {
            pageSum += arr[i];
        }
        else
        {
            student++;
            pageSum = arr[i];
        }
    }
    return student > m ? false : true;
}

int main()
{
    int m = 2;
    int n = 4;
    vector<int> arr = {2, 1, 3, 4};
    int maxPage = 0;
    for (int i = 0; i < arr.size(); i++)
    {
        maxPage += arr[i];
    }

    int start = 0, end = maxPage;
    int ans = -1;

    while (start <= end)
    {
        int mid = start + (end - start) / 2;
    }
    return 0;
}