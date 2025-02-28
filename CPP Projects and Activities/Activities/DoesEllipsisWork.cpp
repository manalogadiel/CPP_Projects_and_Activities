#include <iostream>
using namespace std;

int main(){

int grade;

cout << "Input Grade Percentage, ex. (99): ";
cin >> grade;

    switch (grade) {
        case 98 ... 100:
            cout << "Grade: 1.00 - Excellent" << endl;
            break;
        case 94 ... 97:
            cout << "Grade: 1.30 - Superiror" << endl;
            break;
        case 90 ... 93:
            cout << "Grade: 1.50 - Very Good" << endl;
            break;
        case 88 ... 89:
            cout << "Grade: 1.80 - Good" << endl;
            break;
        case 85 ... 87:
            cout << "Grade: 2.00 - Meritorious" << endl;
            break;
        case 83 ... 84:
            cout << "Grade: 2.30 - Very Satisfactory" << endl;
            break;
        case 80 ... 82:
            cout << "Grade: 2.50 - Satisfactory" << endl;
            break;
        case 78 ... 79:
            cout << "Grade: 2.80 - Fairly Satisfactory" << endl;
            break;
        case 75 ... 77:
            cout << "Grade: 3.00 - Passing" << endl;
            break;
        default:
            if (grade > 100){
                cout << "Input Grades form 0 - 100!" << endl;
            } else cout << "Grade: 5.00 - Failure" << endl;
    }
    return 0;
}
