//sorted array

#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main(){


int size;
cout << "Enter size of array: ";
cin >> size;
vector<int> nums(size);
cout << "Enter elements: \n";
for(int i=0; i<size; i++){
    cin >> nums[i];
}

sort(nums.begin(), nums.end());

cout << "Result: ";
for(int i=0; i<size; i++){
    cout << nums[i] << " ";
}
}
