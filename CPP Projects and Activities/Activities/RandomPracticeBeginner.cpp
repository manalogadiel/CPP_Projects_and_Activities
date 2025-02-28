#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    //variables
    string lol;
    lol = "yay ";
    int age;
    age = 12;
    cout << lol << age << endl;
    lol = "nay ";
    age = 11;
    cout << lol << age << endl << endl;


    //Data types
    char grade = 'A';
    string phrase = "Im Gadiel";
    //int age = 18;
    float gwa = 1.00;
    double pi = 3.141592653589;
    bool isMale = true;
    cout << grade << endl << endl;


    //strings
    cout << "Eyy\nsige\n" << phrase << endl;
    cout << phrase.length() << endl;
    cout << phrase[1] << endl;
    phrase[0] = 'B';
    cout << phrase << endl;
    cout << phrase.find("Gadiel", 0) << endl;
    cout << phrase.substr(3,6) << endl;

    string phrasesub;
    phrasesub = phrase.substr(3,6);
    cout << phrasesub << endl << endl;

    //numbers
    cout << 12*5 << endl;
    //any operation
    cout << 10 % 3 << endl;
    //for getting remainder
    cout << (4 + 5) * 10 << endl;

    int wnum = 5;
    double dnum = 5.5;

    /*
    wnum++;
        ++, add 1
        --, subtract 1
        (operator)=, add specific value
    */

    cout << wnum << endl;
    cout << 5.5 + 5 << endl;
    cout << 10/3 << endl;
    cout << 10.0/3.0 << endl << endl;

    //cmath

    cout << pow(2,5) << endl;
    cout << sqrt(36) << endl;

    return 0;
}
