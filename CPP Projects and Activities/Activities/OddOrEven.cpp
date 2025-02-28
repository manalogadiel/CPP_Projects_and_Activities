#include <iostream>
using namespace std;

int main() {
    int number;


    cout << "Enter a number: ";
    cin >> number;

    if (number % 2 == 0) {
        cout << "Number " << number << " is even." << endl;
    } else {
        cout << "Number " << number << " is odd." << endl;
    }

    return 0;
}
