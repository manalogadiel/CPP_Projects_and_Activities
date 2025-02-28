#include <iostream>
using namespace std;

int main() {
   
double grade;

    cout << "\tRemarks:\n";
    cout << "\tNumerical Grade \tLetter Grade\n";
    cout << "\t90-100 \t\t\tA\n";
    cout << "\t85-89 \t\t\tB\n";
    cout << "\t80-84 \t\t\tC\n";
    cout << "\t75-79 \t\t\tD\n";
    cout << "\tBelow 75 \t\tF\n";

    cout << "Enter numerical grade: ";
    cin >> grade;

    if (grade >= 90) {
        cout << "Your grade is: A" << endl;
    }
    else if (grade >= 85) {
        cout << "Your grade is: B" << endl;
    }
    else if (grade >= 80) {
        cout << "Your grade is: C" << endl;
    }
    else if (grade >= 75) {
        cout << "Your grade is: D" << endl;
    }
    else {
        cout << "Your grade is: F" << endl;
    }

    return 0;
}