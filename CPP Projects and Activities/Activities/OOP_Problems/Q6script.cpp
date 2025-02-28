// NxN matrix returning islands formed

#include <iostream>

using namespace std;

int main(){
    int x, y;
    
    int count = 0;
    cout << "Enter number of rows: ";
    cin >> x;
    cout << "Enter number of columns: ";
    cin >> y;

    int n[x][y];
    cout << "Enter grid elements: \n";

    for (int i = 0; i < x; i++){
        for (int j = 0; j < y; j++){
                cin >> n[i][j];
        }
    }

    for (int i = 0; i < x; i++){
        for (int j = 0; j < x; j++){
                if(n[i][j] == 1){
                    n[i][j] = 2;
                    if ((n[i][j+1]) == 2 || (n[i-1][j]) == 2 || (n[i][j-1]) == 2 || (n[i+1][j]) == 2 ){
                        continue;
                    }
                    if (n[i][j+1] == 1 ){
                        n[i][j] = 2;
                    } 
                    if (n[i-1][j] == 1){
                        n[i][j] = 2;
                    } 
                    if (n[i][j-1] == 1 ){
                        n[i][j] = 2;
                    } 
                    if (n[i+1][j] == 1) {
                        n[i][j] = 2;
                    } 

                count ++;
                }          
             }
        }

        cout << endl << count;
    }
    
