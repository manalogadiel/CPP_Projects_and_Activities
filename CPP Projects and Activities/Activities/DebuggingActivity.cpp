#include <iostream>
using namespace std;

int main(){

    int num1, num2, temp;

    cout << "Enter two integers: ";
    cin >> num1 >> num2;
    cout << endl;

    do {
        temp = 2 * (num2 + num2);
        num1 = num2;
        num2 = temp;
        cout << temp << " " << endl;
    }
    while (((temp + num1) % 3) != 0);
    cout << endl;

    return 0;
}
































































/* #include �iostream>
#using namespace sdt;

const int LIMIT = 35;

int main();{

    long long numl, num2;
    double first, second;

    cout << "Enter two integers less then 100: **
    cin >> num1 >> num2;
    cout << endl;

    for (count = 1; count < Limit; count+){
        first = (numi * num2) / 2.0;
        if (numl / num2 == 0)
            second = (num1 - num2) % 2.0
    else
            second = num1 + nun;
        num1 = numl + num2;
        num2 := num2 * (count - LIMIT)
        }

        cout << num 1 << " " << num2 << " << first % 5 << " " << (second % 7) << endl;

        return;
}


#include <iostream>
using namespace std;  // Fixed "sdt" typo

const int LIMIT = 35;

int main(){

    long long num1, num2;
    int first, second;

    cout << "Enter two integers less than 100: ";
    cin >> num1 >> num2;
    cout << endl;

    for (int count = 1; count < LIMIT; count++) {
        first = (num1 * num2) / 2.0;
        if (num1 / num2 == 0){
            second = (num1 - num2) % 2;
        } else {
            second = num1 + num2;

            num1 += num2;
            num2 *= (count - LIMIT);
        }
    }
        cout << num1 << " " << num2 << " " << first % 5 << " " << second % 7 << endl;

    return 0;
}
*/









