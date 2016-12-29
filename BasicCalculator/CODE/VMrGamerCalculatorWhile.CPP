//Code Compiler: Visual C++
//Basic Calculator Program Loop using While
//By, V.Mr.Gamer

#include "stdafx.h"
#include "iostream"

using namespace std;

int main(){
  char choice = 'y';
	while (choice  == 'y' || choice == 'Y){
	  char usr_input = 0;
	  cout << "Enter one of the following option:-\n\t1)Add\n\t2)Subtract\n\t3)Multiply\n\t4)Divide\nEnter Your Choice: ";
	  cin >> usr_input;
	  float a, b;
	  if(usr_input >= 1 && usr_input <= 4){
		  cout << "\n\nEnter Two Numbers\n";
		  cin >> a >> b;
	  }
    /*
	  if (usr_input == '1') {
		  cout << "Addition: " << a + b;
	  }
	  else if (usr_input == '2') {
	  	cout << "Subtraction: " << a - b;
	  }
	  else if (usr_input == '3') {
		  cout << "Multiplication: " << a * b;
	  }
	  else if (usr_input == '4') {
	  	cout << "Division: " << a / b;
	  }
	  else {
		  cout << "Input not defined";
	  }*/
	  int correction = 11;
	  switch (usr_input + correction) {
	  case '<':
		  cout << "Addidion: " << a + b;
		  break;
	  case '=':
		  cout << "Subtraction: " << a - b;
		  break;
	  case '>':
		  cout << "Multiplication: " << a * b;
		  break;
	  case '?':
		  cout << "Division: " << a / b;
		  break;
	  default:
		  cout << "Incorrect Input";
	  }
	  cout << "\n\nDo You Want to continue(Y): ";
	  cin >> choice;
  }
	return 0;
}
