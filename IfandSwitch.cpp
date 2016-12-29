// IfandSwitch.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "iostream"
#include "stdlib.h"
#include "math.h"

using namespace std;

int main(){
	char choice = 'y';
	while (choice == 'y' || choice == 'Y') {
		system("cls");
		char usr_input = 0;
		float a, b;
		cout << "Enter one of the following option:-\n\t1)Add\n\t2)Subtract\n\t3)Multiply\n\t4)Divide\n\t5)Raise to\nEnter Your Choice: ";
		cin >> usr_input;
		system("cls");
		cout.flush();
		switch (usr_input) {
		case '1':
			cout << "\n\nEnter Two Numbers\n";
			cin >> a >> b;
			cout << "Addidion: " << a + b;
			break;
		case '2':
			cout << "\n\nEnter Two Numbers\n";
			cin >> a >> b;
			cout << "Subtraction: " << a - b;
			break;
		case '3':
			cout << "\n\nEnter Two Numbers\n";
			cin >> a >> b;
			cout << "Multiplication: " << a * b;
			break;
		case '4':
			cout << "\n\nEnter Two Numbers\n";
			cin >> a >> b;
			cout << "Division: " << a / b;
			break;
		case '5':
			cout << "Enter one of the following option: \n\t1)Square\n\t2)Cube\n\t3)Any Integer\nChoice: ";
			cin >> usr_input;
			system("cls");
			cout.flush();
			switch (usr_input) {
			case '1':
				cout << "Enter the Number to be Squared: ";
				cin >> a;
				cout << "Square of " << a << " is: " << a * a;
				break;
			case '2':
				cout << "Enter the Number to be Cubed: ";
				cin >> a;
				cout << "Cube of " << a << " is: " << a * a * a;
				break;
			case '3': {
				cout << "Enter the Number to be Powered: ";
				cin >> a;
				cout << "Enter the integer x";
				cin >> b;
				double power = 1;
				if (floor(b) == b) {
					if (b >= 0) {
						for (int i = 0;i < b;i++) {
							power *= a;
						}
					}
					else {
						for (int i = 0;i < -b;i++) {
							power /= a;
						}
					}
					cout << a << " Raised to the power " << b << " is: " << power;
				}
				else {
					cout << "Err: Only Integers allowed!!";
				}
				break;
			}
			default:
				cout << "Err: Incorrect Input!";
			}
			break;
		default:
			cout << "Err: Incorrect Input!";
		}
		cout << "\n\nDo You Want to continue(Y): ";
		cin >> choice;
	}
	return 0;
}

