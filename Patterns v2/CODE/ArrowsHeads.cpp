//Code Compiler:  VC++
//Basic Patterns: ArrowHeads
//By V.Mr.Gamer

//System Header Files
#include "stdafx.h"
#include < iostream>
#include <conio.h>
#include <ctype.h>

//Namespaces
using namespace std;

//Functions
void ArrowV1(char);
void ArrowV2(char);
void ArrowV3(char);

//Entry Point 
int main(){
start:
	system("cls");
	cout.flush();
	cout << "Enter one of the following choices:-\n\t1)Arrow v1\n\t2)Arrow v2\n\t3)Arrow v3\nChoice: ";
	char a;
	cin >> a;
	system("cls");
	cout.flush();
	switch (a){
	case '1':
		cout << "Enter \'r\' for right and \'l\' for left: ";
		cin >> a;
		system("cls");
		cout.flush();
		ArrowV1(tolower(a));
		break;
	case '2':
		cout << "Enter \'r\' for right and \'l\' for left: ";
		cin >> a;
		system("cls");
		cout.flush();
		ArrowV2(tolower(a));
		break;
	case '3':
		cout << "Enter \'r\' for right and \'l\' for left: ";
		cin >> a;
		system("cls");
		cout.flush();
		ArrowV3(tolower(a));
		break;
	default:
		break;
	}
	cout << "\n\n\tPress Y or y to try again";
	char ch;
	ch = _getch();
	if (ch == 'y' || ch == 'Y')
		goto start;
    return 0;
}

//Function Definitions
void ArrowV1(char dir) {
	if (dir == 'l') {
		int r;
		cout << "Enter the Arrow Height(odd and >=3): ";
		cin >> r;
		if ((r % 2) && r >= 3) {
			for (int i = 0, k = 0;i < r;i++) {
				for (int j = 0;j < r / 2 - k;j++) {
					cout << " ";
				}
				for (int j = 0;j <= k;j++) {
					cout << "*";
				}
				if (i < r / 2) {
					k++;
				}
				else {
					k--;
				}
				cout << '\n';
			}
		}
	}
	else if (dir == 'r') {
		int r;
		cout << "Enter the Arrow Height(odd and >=3): ";
		cin >> r;
		if ((r % 2) && r >= 3) {
			for (int i = 0, k = 0;i < r;i++) {
				for (int j = 0;j <= k;j++) {
					cout << "*";
				}
				if (i < r / 2) {
					k++;
				}
				else {
					k--;
				}
				cout << '\n';
			}
		}
	}
	else {
		cout << "Wrong Input";
	}
}
void ArrowV2(char dir) {
	if (dir == 'l') {
		int r;
		cout << "Enter the Arrow Height(odd and >=3): ";
		cin >> r;
		if ((r % 2) && r >= 3) {
			for (int i = 0, k = 0;i < r;i++) {
				for (int j = 0;j < r / 2 - k;j++) {
					cout << " ";
				}
				for (int j = 0;j < r / 2;j++) {
					cout << "*";
				}
				if (i < r / 2) {
					k++;
				}
				else {
					k--;
				}
				cout << '\n';
			}
		}
	}
	else if (dir == 'r') {
		int r;
		cout << "Enter the Arrow Height(odd and >=3): ";
		cin >> r;
		if ((r % 2) && r >= 3) {
			for (int i = 0, k = 0;i < r;i++) {
				for (int j = 0;j <= k;j++) {
					cout << " ";
				}
				for (int j = 0;j < r / 2;j++) {
					cout << "*";
				}
				if (i < r / 2) {
					k++;
				}
				else {
					k--;
				}
				cout << '\n';
			}
		}
	}
	else {
		cout << "Wrong Input";
	}
}
void ArrowV3(char dir) {
	if (dir == 'l') {
		int r;
		cout << "Enter the Arrow Height(odd and >=3): ";
		cin >> r;
		for (int i = 0, k = 0;i < r;i++) {
			if ((r % 2) && r >= 3) {
				for (int j = 0;j < r - 2 * k - 1;j++) {
					cout << " ";
				}
				for (int j = 0;j <= k;j++) {
					cout << "*";
				}
				if (i < r / 2) {
					k++;
				}
				else {
					k--;
				}
				cout << '\n';
			}
		}
	}
	else if(dir == 'r') {
		int r;
		cout << "Enter the Arrow Height(odd and >=3): ";
		cin >> r;
		if ((r % 2) && r >= 3) {
			for (int i = 0, k = 0;i < r;i++) {
				for (int j = 0;j < k;j++) {
					cout << " ";
				}
				for (int j = 0;j <= k;j++) {
					cout << "*";
				}
				if (i < r / 2) {
					k++;
				}
				else {
					k--;
				}
				cout << '\n';
			}
		}
	}
	else {
	}
}
