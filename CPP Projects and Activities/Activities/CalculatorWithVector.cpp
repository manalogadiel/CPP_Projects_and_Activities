#include <iostream>
#include <vector>
using namespace std;

int main() {
    char operation;
    vector<double> numbers;
    double num, result;

    cout << "Welcome to the Multiple Input Calculator" << endl;
    cout << "Choose an operation:" << endl;
    cout << "A. Addition" << endl;
    cout << "B. Subtraction" << endl;
    cout << "C. Multiplication" << endl;
    cout << "D. Division" << endl << endl;

    cin >> operation;
    operation = toupper(operation);

    cout << "Enter the values (type '=' to end input):" << endl;

    while (cin >> num) {
        numbers.push_back(num);
    }

    if (cin.fail()) {
        cin.clear();
        char endInput;
        cin >> endInput;
        if (endInput != '=') {
            cout << "Error: Invalid input!" << endl;
            return 1;
        }
    }

    if (numbers.empty()) {
        cout << "Error: No values entered!" << endl;
        return 1;
    }

    switch (operation) {
        case 'A':
            result = 0;
            for (double val : numbers) {
                result += val;
            }
            cout << "Sum = " << result << endl;
            break;

        case 'B':
            result = numbers[0];
            for (size_t i = 1; i < numbers.size(); i++) {
                result -= numbers[i];
            }
            cout << "Difference = " << result << endl;
            break;

        case 'C':
            result = 1;
            for (double val : numbers) {
                result *= val;
            }
            cout << "Product = " << result << endl;
            break;

        case 'D':
            result = numbers[0];
            for (size_t i = 1; i < numbers.size(); i++) {
                if (numbers[i] != 0) {
                    result /= numbers[i];
                } else {
                    cout << "Error: Division by zero!" << endl;
                    return 1;
                }
            }
            cout << "Quotient = " << result << endl;
            break;

        default:
            cout << "Error: Invalid operation!" << endl;
            break;
    }

    return 0;
}
