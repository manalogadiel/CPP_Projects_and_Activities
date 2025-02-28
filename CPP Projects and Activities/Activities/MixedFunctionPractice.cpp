#include <iostream>
#include <cmath>

using namespace std;

void myFunction1()
{
    char choice;
    double x, y;

    cout << "Enter Choice" << endl;
    cout << "A. Addition" << endl;
    cout << "B. Subtraction" << endl;
    cout << "C. Multiplication" << endl;
    cout << "D. Division" << endl;
    cout << "E. Getting the Remainder" << endl;
    cout << "F. Area of Circle" << endl << endl;

    cin >> choice;

    choice = toupper(choice);

    if (choice == 'E')
        {
        int x, y;

        cout << endl << "You entered " << choice << endl;
        cout << "Enter the first value: " << endl;
        cin >> x;
        cout << "Enter the second value: " << endl;
        cin >> y;

        cout << endl << x << " % " << y << " = " << x % y;

        }
    else if (choice == 'F')
        {
        double r, result;

        cout << "Enter radius: ";
        cin >> r;

        result = M_PI * pow(r,2);

        cout << "Area = " << result << endl;
        }
    else {
            cout << endl << "You entered " << choice << endl;
            cout << "Enter the first value: " << endl;
            cin >> x;
            cout << "Enter the second value: " << endl;
            cin >> y;

            switch (choice)
            {
             case 'A':
                cout << endl << x << " + " << y << " = " << x + y;
                break;
            case 'B':
                cout << endl << x << " - " << y << " = " << x - y;
                break;
            case 'C':
                cout << endl << x << " * " << y << " = " << x * y;
                break;
            case 'D':
                if (y != 0) {
                cout << endl << x << " / " << y << " = " << x / y;
                }
                else {
                cout << "Undefined";
                }
                break;
            default:
                cout << "Error";
                break;
             }
        }

}


void myFunction2()
{

int height;

cout << "Enter height: ";
cin >> height;


for(int i=0; i<height; i++)
{
	for(int j = 0; j<i;j++){
	cout << "*";
	}
	cout << "*"<<endl;
}

}


void myFunction3(){

int range;

cout <<"RHS Right triangle, Enter range: ";cin >> range;

for (int i=range; i>0; i--){

	for (int j = 0; j < i; j++){
		cout << " ";
	}
	for (int k = range; k>i; k--)
	{
		cout << "*";
	}

	cout<< "*" << endl;
}
}



void myFunction4(){

int range;

cout << "Enter range for Inverted RHS triangle: ";
cin >> range;

for (int i = range; i > 0; i--) {

		for (int j = range; j > i; j--){
	cout << " ";
		}
		for (int k = 0; k < i; k++){
			 cout << "*";
		 }
 	cout << endl;
	}
}



void myFunction5(){

int range;

cout << "Enter range for Inverted LHS triangle: ";
cin >> range;

for (int i = range; i > 0; i--) {

		for (int j = 0; j < i; j++) {
	cout << "*";
		 }
 	cout << endl;
	}
}

void myFunction6(){

	int isboolbool = 1;

 try
 {
        while (isboolbool == 1)
        {
        cout << "Continue the loop?\nEnter 0 if no, 1 if yes: ";
        cin >> isboolbool;
            if (isboolbool != 0 && isboolbool != 1)
            {
            throw 99;
            }
        }
        cout << "Ended";
    }
catch(int e){
	cout << "Invalid Number!";

}
}
void myFunction7(){

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
}

void myFunction8(){

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
}


void myFunction9(){

    const int LIMIT = 35;
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
}

void myFunction10(){

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
}

void myFunction11(){
float a, b, c;
    cout<<"Enter three values: ";
    cin>>a>>b>>c;
float largest, smallest;

if(a>b)
{
    if(a>c)
    {
        largest = a;
        if(b>c)
        {
            smallest = c;
        }
        else
        {
            smallest = b;
        }
    }
    else
        {
            largest = c;
            smallest = b;
        }
}
else
{
    if(b>c)
    {
        largest = b;
        if(c>a)
        {
            smallest = a;
        }
        else
        {
            smallest = c;
        }
    }
    else
    {
            largest = c;
            smallest = a;
    }

}
    cout<<endl<<"Largest: "<<largest;
    cout<<endl<<"Smallest: "<<smallest;

}

int main(){

    int num = 1;
    for (int i = 1; i <= 4; i++) {
		for (int j = 0; j < i; j++) {
            cout << num--;
        }
        cout << endl;
        num += (2 * i + 1);
	}
cout << endl;
	 for (int i = 0; i < 5; i++){
        for (char let = 'A'; let <= 'E'; let++) {
            cout << let;
        }
        cout << endl;
	 }
cout << endl;
	  for(int i=1; i <=5; i++){
        for(int j = 1; j <=i ;j++){
            cout << j;
        }
        cout <<endl;
	  }
cout << endl;
	  for (int i = 0; i < 5; i++){
        for (int j = 5; j > 0; j--){
            cout << j;
        }
        cout << endl;
    }
cout << endl;
      for (int i = 5; i > 0; i--){
        for (int j = 0; j < i; j++){
            cout << i;
      }
    cout << endl;
      }
    cout << endl;

myFunction1();
 cout << endl;

myFunction2();
 cout << endl;

myFunction3();
 cout << endl;

myFunction4();
 cout << endl;

myFunction5();
 cout << endl;

myFunction6();
 cout << endl << endl;

myFunction7();
 cout << endl;

myFunction8();
 cout << endl;

myFunction9();
 cout << endl;

myFunction10();
 cout << endl;

myFunction11();
 cout << endl;

	return 0;
}
