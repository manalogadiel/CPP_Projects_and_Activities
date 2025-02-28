#include <iostream>
#include <string>
using namespace std;


    void hangman(int n){
        if(n == 6){
        	cout    << "|---|" << endl
        			<< "|   |" << endl
        			<< "|   O"<< endl
        			<< "|  /|\\" << endl
        			<< "|  / \\" << endl
        			<< "|      " << endl
        			<< "|---|" << endl;
		 } else if (n == 5) {
        	cout    << "|---|" << endl
        			<< "|   |" << endl
        			<< "|   O"<< endl
        			<< "|  /|\\" << endl
        			<< "|  / " << endl
        			<< "|    " << endl
        			<< "|---|" << endl;
		 } else if (n == 4) {
        	cout    << "|---|" << endl
        			<< "|   |" << endl
        			<< "|   O"<< endl
        			<< "|  /|\\" << endl
        			<< "|    " << endl
        			<< "|    " << endl
        			<< "|---|" << endl;
		 } else if (n == 3) {
        	cout    << "|---|" << endl
        			<< "|   |" << endl
        			<< "|   O"<< endl
        			<< "|  /|" << endl
        			<< "|    " << endl
        			<< "|    " << endl
        			<< "|---|" << endl;
		 } else if (n == 2) {
        	cout    << "|---|" << endl
        			<< "|   |" << endl
        			<< "|   O"<< endl
        			<< "|   |" << endl
        			<< "|    " << endl
        			<< "|    " << endl
        			<< "|---|" << endl;
		 } else if (n == 1) {
        	cout    << "|---|" << endl
        			<< "|   |" << endl
        			<< "|   O"<< endl
        			<< "|    " << endl
        			<< "|    " << endl
        			<< "|    " << endl
        			<< "|---|" << endl;
		 } else if (n == 0){
        	cout    << "|---|" << endl
        			<< "|   |" << endl
        			<< "|    "<< endl
        			<< "|    " << endl
        			<< "|    " << endl
        			<< "|    " << endl
        			<< "|---|" << endl;
		 }
    }
int main(){
    cout << "Hangman Game by Gadiel" << endl;

    string word = "DEVELOPMENT";


    hangman(6);

    int leng = word.length();
    char show[100];

    cout << "The word: is ";
        for (int i = 0; i < leng; i++){
            show[i] = '_';
            cout << show[i] << " ";
            }

    show[leng] = '\0';

    cout << endl;


    char let;

    int j = 6;

    while (j > 0) {
        cout << "Enter a letter: ";
        cin >> let;

		system("cls");

        let = toupper(let);

        bool matched = false;

        for (int i = 0; i < leng; i++) {
            if (word[i] == let) {
                show[i] = let;
                matched = true;
            }
        }

        if (!matched) {
            hangman(--j);
        } else{
            hangman(j);
            }


        cout << "The word: is ";
        for (int i = 0; i < leng; i++) {
            cout << show[i] << " ";
        }
        cout << endl;


        if (string(show) == word) {
            cout << "YOU WIN!" << endl;
            break;
        }


        if (j == 0) {
            cout << "HAHAHA TALO, UMAY PAR!" << endl;
            break;
        }

    }

    return 0;
}
