//For Pattern Basics
//By VMrGamer/Vedant
//Code Compiler: Visual C++

#include "stdafx.h"
#include "iostream"

using namespace std;

int main(){
	int a;
	cout << "What is the Square side: ";
	cin >> a;

	for (int i = 0;i < a;i++) {
		for (int j = 0; j < a; j++) {
			cout << "*";
		}
		cout << endl;//cout << '\n';
	}
	cout << endl;
	for (int i = 0;i < a;i++) {
		for (int j = 0;j <= i;j++) {
			cout << "*";
		}
		cout << endl;
	}
	cout << endl;
	for (int i = 0;i < a;i++) {
		for (int j = 0;j < a - i;j++) {
			cout << "*";
		}
		cout << endl;
	}
	cout << endl;
	for (int i = 0;i < a;i++) {
		for (int j = 0;j < a - i - 1;j++) {
			cout << " ";
		}
		for (int j = 0;j <= i;j++) {
			cout << "*";
		}
		cout << endl;
	}
	cout << endl;
	for (int i = 0;i < a;i++) {
		for (int j = 0;j < i;j++) {
			cout << " ";
		}
		for (int j = 0;j < a - i;j++) {
			cout << "*";
		}
		cout << endl;
	}

	/*

	Pyramid
	Inverted Pyramid
	Rectangle

	*/
    return 0;
}

