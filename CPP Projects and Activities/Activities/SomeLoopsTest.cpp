#include <iostream>

using namespace std;

int main(){

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
	return 0;
}
