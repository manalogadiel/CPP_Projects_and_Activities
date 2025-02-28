#include <iostream>
using namespace std;

int main() {
    char let;
    char vowels[5]={'a', 'e', 'i', 'o', 'u'};
    
    cout << "Enter a character (a-z): ";
    cin >> let;
    let = tolower(let);
   
   for (int i=0; i<5; i++){
       if (let == vowels[i]){
           cout << "'" << let << "' is a vowel." << endl;
           break;
        }  
        else if ((let >= 'a' && let <= 'z')) {
            cout << "Character '" << let << "' is a consonant."<< endl;
            break;
        } 
        else {
        cout << "Invalid input!" << endl;
        break;
        }
       }
    return 0;
}
   
   
   
   
  

