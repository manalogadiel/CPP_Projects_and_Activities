#include <iostream>
using namespace std;

int main(){

    double num1, num2, result;

    cout << "Enter first number: ";
    cin >> num1;
    cout << "Enter second number: ";
    cin >> num2;

    try {
        if (num2 == 0)
        throw "Invalid";
        result = num1/num2;
        cout << result;
        } catch(char const* e)
        {
        cout << e;
        }


    return 0;
}












































/*
int i=1;
    int rep;
    int num, sum;
    double avg;

    cout << "Enter How many values: ";
    cin >> rep;

    while (i <= rep){
         cout << "Enter value (" << i << "): " << endl;
         cin >> num;
         sum += num;
         i++;
    }
        avg = sum/rep;
        cout << avg;



void test(int &x){
    x++;
    cout << x << endl;
}
int main (){
    int x = 10;

    test(x);
    cout << x <<endl;

    return 0;
}
    int i=0, sum, num;
    float avg;
    do
    {
    cout << "Enter num:"<<endl;
    cin >> num;
    sum = num + sum;
    i++;
    }
     while (i<10);
    avg = sum/10.00;
    cout << "Average: "<< avg;



    for (int i=1; i<=10; i++){
    cout << i;
    }*/
