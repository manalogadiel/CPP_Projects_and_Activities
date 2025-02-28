// Medium: "Valid Parentheses"
// Problem Statement:
// Given a string containing only the characters (, ), {, }, [ and ], determine if the input string is
// valid. A string is valid if:
// 1. Open brackets are closed by the same type of brackets.
// 2. Open brackets are closed in the correct order.
// Input:
// ● A string S ( 1 ≤ ∣S∣ ≤100 )
// Output:
// ● Print "YES" if S is valid, otherwise print "NO".
// Example 1:
// Enter S: {[()]}
// Result: YES
// Example 2:
// Enter S: {[(])}
// Result: NO

#include <iostream>
#include <vector>
using namespace std;

int main(){

    string S, result;
    cout << "Enter S: ";
    cin >> S;

    vector<char>arr;
    vector<char>arr1;
    
    for (int i = 0; i < 3; i++){
        arr.push_back(S[i]);
        }
    for (int i = 3; i < 6; i++){
        arr1.push_back(S[i]);
        }
    bool match = false;
    for (int i = 0, j = 2; i < 3; i++, j--){
        if(arr[i] == '{' && arr1[j] == '}' ||
            arr[i] == '(' && arr1[j] == ')' ||
            arr[i] == '[' && arr1[j] == ']'){
            match = true;
        }else {
            match = false;
        }
    }
    if (match){
        result = "YES";
    } else result = "NO";


    cout << "Result: " << result;


    return 0;
}