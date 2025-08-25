#include <iostream>
#include <vector>
using namespace std;

//function to calculate n^x using O(log n) time complexity
// int binaryFormOfN(int n)
// {
//     int binary = 0;
//     int place = 1;
//     while (n > 0)
//     {
//         int reminder = n % 2;
//         binary += (reminder * place);
//         n /= 2;
//         place *= 10;
//     }
//     return binary;
// }

// int main()
// {
//     int n, powerOfN;

//     cout << "Enter the n number: ";
//     cin >> n;
//     cout << "Enter the power of n: ";
//     cin >> powerOfN;
//     int binary = binaryFormOfN(n);

//     int ans = 1;

//     while (binary > 0)
//     {
//         if (binary % 2 == 1)
//         {
//             ans *= powerOfN;
//         }
//         powerOfN *= powerOfN;
//         binary /= 2;
//     }

//     return 0;
// }

//function to calculate buy and sell stock and maximize profit
int main(){
    vector<int> prices = {7, 1, 5, 3, 6, 4};
    return 0;
}
