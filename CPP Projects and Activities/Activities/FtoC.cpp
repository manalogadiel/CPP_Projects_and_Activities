#include <iostream>
using namespace std;

int main()
{
    double F, C;

    cout << "Degree Fahrenheit to Degree Celcius Converter" << endl;
    cout << "Enter the temperature in Degree Fahrenheit: ";
    cin >> F;

    C = (5.0 / 9.0) * (F - 32);

    cout << "The conversion in Degree Celsius is: " << C << endl;
    return 0;
}
