// 2. Easy: "Find the Missing Number"
// Problem Statement:
// You are given an array of size n−1 containing distinct numbers from 1 to n. Find the missing
// number.
// Input:
// ● An integer n − 1, which is the size of the array ( 2 ≤ n ≤ 1000 )
// ● An array of n − 1 integers (each from 1 to n, with one missing)
// Output:
// ● Print the missing number.
// Example 1:
// Enter size of array: 4
// Enter elements:
// 1
// 2
// 3
// 5
// Missing number: 4

#include <iostream>
using namespace std;

int main(){
    int size, miss;
    cout << "Enter size of array: ";
    cin >> size;

    int arr1[size];
    int nums[size];

    for (int i = 0; i < size; i++){
        arr1[i] = i+1;
    }

    cout << "Enter elements: \n";
    for (int i = 0; i < size; i++){
        cin >> nums[i];
    }

    for (int i = 0; i < size; i++){
        if (nums[i] != arr1[i]){
            miss = i+1;
            cout << "Missing number: " << miss;
            return 0;
        } 
       
    }
    cout << "No missing number.";
    
    return 0;
}