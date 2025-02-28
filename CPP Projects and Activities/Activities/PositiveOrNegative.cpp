#include <iostream>
using namespace std;

int main() {
    double number;

    cout << "Enter a number: ";
    cin >> number;

    if (number > 0) {
        cout << "Number " << number << " is positive." << endl;
    } else if (number < 0) {
        cout << "Number " << number << " is negative." << endl;
    } else {
        cout << "The number is zero." << endl;
    }

    return 0;
}
