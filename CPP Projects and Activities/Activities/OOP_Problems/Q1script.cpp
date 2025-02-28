// 1. Easy: "Sum of Digits"
// Problem Statement:
// Given an integer N, compute the sum of its digits.
// Input:
// ● An integer N ( 1 ≤ N ≤ 10
// 9
// )
// Output:
// ● Print the sum of the digits of N.
// Example 1:
// Enter N: 1234
// Sum of digits: 10

#include <iostream>
using namespace std;

int main(){
    string nums;
    cout << "Enter N: ";
    cin >> nums;

    int num = 0, total = 0;
    
    for(int i=0; i < nums.length(); i++){
        num = nums[i] - '0';
        total += num;
    }

    cout << "Sum of digits: " << total;

    return 0;
}

// #include <iostream>
// using namespace std;

// int main(){
//     int nums;
//     cout << "Enter N: ";
//     cin >> nums;

//     int x = 0;

//     while (nums > 0){
//         x += nums % 10;
//         nums /= 10;

//         //123
//         //12.3
//         //12
//     }
// cout << "Sum of digits " << x;
//     return 0;
// }