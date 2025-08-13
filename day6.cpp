#include<iostream>

using namespace std;
#include <cmath>

// int convertToBinary(int n){
//     int binary = 0 ;
//     int place = 1;
//     while (n>0){
    
//         int reminder = n % 2;
//         binary += (reminder * place);
//         n /= 2;
//         place *= 10;
//         // cout << "remainder: " << reminder << ", binary: " << binary << ", n: " << n << "times" << times << endl;
//     }
//     return binary;
    
// }

// int main(){
//     int n;
//     cout << "Enter a number: ";
//     cin >> n;
//     int binary=convertToBinary(n);
//     cout << "Binary representation of " << n << " is: " << binary << endl;

//     return 0;
// }

int binaryToDecimal(int n){
    int answer = 0;
    int power = 1;
    while (n>0)
    {
        int rem = n%10;
        answer += rem * power;
        power *= 2;
        n /= 10;
    }
    
    return answer;
}

int main(){
    int n;
    cout << "Enter a binary number: ";
    cin >> n;
    int decimal = binaryToDecimal(n);
    cout << "Decimal representation of " << n << " is: " << decimal << endl;
    return 0;
}