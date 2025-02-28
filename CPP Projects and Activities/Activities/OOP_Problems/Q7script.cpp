//Roman to Int

#include <iostream>
#include <unordered_map>
#include <algorithm>
using namespace std;

int main(){

    string rom;
    int ans=0;
    unordered_map<char, int> roman ={
                        {'I', 1},
                        {'V', 5},
                        {'X', 10},
                        {'L', 50},
                        {'C', 100},
                        {'D', 500},
                        {'M', 1000}
    };

    cout << "Enter Roman Numeral: ";
    cin >> rom;
    transform(rom.begin(), rom.end(), rom.begin(), ::toupper);

    for(int i=0; i < rom.length(); i++){
        if(roman[rom[i]] > roman[rom[i+1]]){
            ans += roman[rom[i]];
        } else{
            ans -= roman[rom[i]];
        }
    }

    cout << "The number is: " << ans;


    return 0;
}