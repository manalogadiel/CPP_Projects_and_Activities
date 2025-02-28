#include <iostream>

using namespace std;

int main() {
    int num;
    char ch;
    int num1, num2;

    bool isEqual;
    bool isNotEqual;

    isEqual = num1 == num2;
    isNotEqual = num1 != num2;

    cout << "Enter a number: ";
    cin >> num1;
    cout << "Enter a number: ";
    cin >> num2;

    cout << "Are they equal?" << endl << isEqual << endl << endl;
    cout << "Are they not equal?" << endl << isNotEqual << endl << endl;

    cout << "Enter a number: ";
    cin >> num;
    cout << "Enter a letter: ";
    cin >> ch;

    cout << "Your entered " << num << endl;
    cout << "Welcome to C++" << endl;
    cout << "Your entered letter "<< ch << endl;
    return 0;
}
