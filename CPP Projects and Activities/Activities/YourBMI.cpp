#include <iostream>
#include <cmath>
#include <iomanip> 
using namespace std;

int main() {
    
    double weight, height, bmi;

 
    cout << "Enter your weight (in kilograms): ";
    cin >> weight;

    cout << "Enter your height (in meters): ";
    cin >> height;

    bmi = weight / pow(height, 2);

  
    cout << fixed << setprecision(2) << "Your BMI is: " << bmi << endl;

   
    if (bmi < 18.5) {
        cout << "Class: Underweight." << endl;
    } else if (bmi < 25) {
        cout << "Class: Normal weight." << endl;
    } else if (bmi < 30) {
        cout << "Class: Overweight." << endl;
    } else {
        cout << "Class: Obese." << endl;
    }

    return 0;
}