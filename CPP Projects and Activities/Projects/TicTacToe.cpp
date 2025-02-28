#include <iostream>
using namespace std;

char marker;
char board[3][3] ={ {'1', '2', '3'}, 
								 {'4', '5', '6'}, 
								 {'7', '8', '9'}};
void theboard(){
	cout << "-------------\n";
	for (int i = 0; i < 3; i++){
		for(int j = 0; j < 3; j++){
			cout << " " << board[i][j] << " |";
		}
		cout << "\n-------------\n";
}
}

bool inmarker(int slot){
	int row = ((slot - 1)/ 3);
	int col = ((slot - 1)%3);
	
    if (board[row][col] != 'X' && board[row][col] != 'O') {
        board[row][col] = marker;
        return true;
    } else {
        return false;
    }
}

bool check(){
	
for(int i=0; i<3; i++){
		if(board[i][0] == board[i][1]&&board[i][1]==board[i][2]){
	return true;
		}
	}

for(int i=0; i<3; i++){
		if(board[0][i] == board[1][i]&&board[1][i]==board[2][i]){
	return true;
		}
}
		if(board[0][0] == board[1][1]&&board[1][1]==board[2][2]){
		return true;
}
if(board[2][0]==board[1][1]&&board[1][1]==board[0][2]){
return true;
}
return false;
}



bool isfull(){
	for(int i = 0; i<3; i++){
		for (int j = 0; j<3; j++){
		if(board[i][j] != 'X' && board[i][j] != 'O'){
		return false;
		}
		}
	}
	return true;
}






int main(){
	
	int slot;
	cout << "Choose your marker (X or O): ";
	cin >> marker;
	marker = toupper(marker);
	
system("cls");

	if (marker == 'X'){
		marker = 'O';
	}else{
		marker = 'X';
	}
	
	string player = "Player_1";
	
	if (player == "Player_1"){
		player = "Player_2";
	}else{
		player =  "Player_1";
	}
	
	theboard();

	
	for(int p = 1; p < 100; p++){
			if (player == "Player_2"){
			player = "Player_1";
		}
		else {
			player = "Player_2";
		}
		
		if (marker == 'O'){
			marker = 'X';
		}
		else {
			marker = 'O';
		}
		
cout << player << ", your marker is " << marker << ", Enter slot: ";
	cin >> slot;

if (!inmarker(slot)) {
            cout << "Slot already occupied! Try again.\n";
            if (player == "Player_2"){
			player = "Player_1";
			}
		else {
			player = "Player_2";
			}
		
		if (marker == 'O'){
			marker = 'X';
		}
		else {
			marker = 'O';
		}   
        }
system("cls");
theboard();

if (check()){
	cout << player <<  " Wins!";
	break;
}

if (isfull()){
	cout << "Draw!";
	break;
}
	}
	return 0;
}