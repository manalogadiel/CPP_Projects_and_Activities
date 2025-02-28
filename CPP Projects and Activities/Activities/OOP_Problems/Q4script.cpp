//2nd Largest Number

#include <iostream>
#include <algorithm>
using namespace std;

int main(){
    int size;
    cout << "Enter size of array: ";
    cin >> size;

    int elements[size];
    cout << "Enter elements: \n";

    for(int i = 0; i<size; i++){
    cin >> elements[i];
    }
    int n = sizeof(elements)/sizeof(elements[0]);
    sort(elements, elements + n);
    int current= 0, before=0;
    for(int i = 0; i < size; i++){
        if (elements[i]> before){
            before = current;
            current =  elements[i];   
        }
    }
    string result;
    if (before == current){
        result = "None";
    } else result = to_string(before);

    cout << "Result: " << result;
}