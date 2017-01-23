#include <iostream>

using namespace std;

int board[3][3]={
	{0,0,0},
	{0,0,0},
	{0,0,0}
};

void check();
char PlayerA();
char playerB();
char A;
char B;
int i,j;

void check() {
	if(board[0][0]==board[0][1]==board[0][2] || board[1][0]==board[1][1]==board[1][2] || board[2][0]==board[2][1]==board[2][2] || board[0][0]==board[1][1]==board[2][2] || board[0][2]==board[1][1]==board[2][0]) {
		cout<<"A wins \n";
	}
	else{
		cout<<"Continue the game \n";
	}
	return;
}

char playerA() {

	cout<<"Player A Enter row and coloumn \n";
	cin>>i;
	cin>>j;
	if(board[i][j]!=0) {
	board[i][j]=A;
	cout<<"------------\n";
	cout<<"|"<<board[0][0]<<"|"<<cout<<board[0][1]<<"|"<<board[0][2]<<"\n";
	cout<<"|"<<board[1][0]<<"|"<<cout<<board[1][1]<<"|"<<board[1][2]<<"\n";
	cout<<"|"<<board[2][0]<<"|"<<cout<<board[2][1]<<"|"<<board[2][2]<<"\n";
    cout<<"------------ \n";
    }
    else {
    cout<<"Enter other row and coloumn \n";	
    }

    return A;
}

char playerB() {
	cout<<"Player B enter row and coloumn: \n";
	cin>>i>>j;
	if(board[i][j]!=0) { 
	board[i][j]=B;
	cout<<"------------ \n";
	cout<<"|"<<board[0][0]<<"|"<<cout<<board[0][1]<<"|"<<board[0][2]<<"\n";
	cout<<"|"<<board[1][0]<<"|"<<cout<<board[1][1]<<"|"<<board[1][2]<<"\n";
	cout<<"|"<<board[2][0]<<"|"<<cout<<board[2][1]<<"|"<<board[2][2]<<"\n";
	cout<<"------------ \n";
	}
    else {
    cout<<"Enter other row and coloumn \n";	
    }
    return B;
}


int main() {
cout<<"Player A enter your choice: \n";
cin>>A;
if(A=='X' || A=='x') {
	B='0';
}
else {
	B='x';
}

cout<<"Player B gets: "<<B<<"\n";  

playerA();
PlayerB();
PlayerA();
playerB();
PlayerA();
check();
PlayerB();
check();
PlayerA();
check();
PlayerB();
check();
PlayerA(); 

if(board[0][0]==board[0][1]==board[0][2] || board[1][0]==board[1][1]==board[1][2] || board[2][0]==board[2][1]==board[2][2] || board[0][0]==board[1][1]==board[2][2] || board[0][2]==board[1][1]==board[2][0]) {
		cout<<"A wins \n";
	}
	else{
		cout<<"Player B wins! \n";
	}
	return 0;
}
