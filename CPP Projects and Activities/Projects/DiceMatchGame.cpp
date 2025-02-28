#include <iostream>
#include <cstdio>
#include <ctime>
#include <thread> 
#include <chrono> 
using namespace std;

int main(){

    int cpu, player;

    srand(time(NULL));
    cpu = 1+(rand()%6);

    cout << "Enter number (1-6): ";
    cin >> player;

    while (cin.fail() || player > 6 || player < 1){
        system("cls");
        cin.clear();
        cin. ignore(5000, '\n');
        cout << "Invalid input!" << endl;
        cout << "Enter number (1-6): ";
        cin >> player;
    }


    this_thread::sleep_for(chrono::seconds(1));
    system("cls");

    cout << "Your number: " << player << endl;
    cout << "Dice is rolling..." << endl;

    this_thread::sleep_for(chrono::seconds(3));


    cout << "CPU rolled: "<< cpu << endl;

    if (cpu == player){
        cout << "YOU WIN!";
    } else {
        cout << "YOU LOST!";
    }

return 0;
}
