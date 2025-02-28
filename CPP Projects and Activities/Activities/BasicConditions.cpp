#include <iostream>

using namespace std;

int main()
{
    int b;

    cout << (b = 4)<< endl;
    cout << (b == 4)<< endl;
    cout << (b > 3)<< endl;
    cout << (b < 4)<< endl;
    cout << (b = 0)<< endl;
    cout << (b == 0)<< endl;
    cout << (b > 0)<< endl;
    cout << (b && 4)<< endl;
    cout << (b || 4)<< endl;
    cout << (!b)<< endl;

    return 0;
}
