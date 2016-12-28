//Basic Calculator Program
//By Nishant Patel
//You should atleast give an intro about your program

#include<iostream>
using namesapce std;

int main()//Main is the entry point, never just leave it declared
{
  int a, b, EnterYourChoice;//you cannot start or end a identifier with " or ', nor you can have spaces in between
  cout<< "Choose any one from following options:\n\t1)Addition\n\t2)Subtraction\n\t3)Multiplication\n\t4)Division"
      << endl << "Enter Your Choice: ";/*You can use << to seperate different outputs, ; is used to determine the end of 
      a statement*/
  cin >> EnterYourChoice;
  cout << "Enter 2 numbers" << endl;//Write Freely, Conjusted writing is a bad practice
  cin >> a >> b;
  if(EnterYourChoice == 1)//Firstly the Equality check is done by == not =, = is assignment operator
  {
    cout << "Addition: " << a + b;
  }
  else(EnterYourChoice == 2)//Secondly Follow the same Curly bracket format throughout all your codes
  {
    cout << "Substraction: " << a - b;
  }
  else(EnterYourChoice == 3)//Always leave an output for the user about what you have done
  {
    cout << "Multiplication: " << a * b;
  }
  else(EnterYourChoice=4)//Forgot the ) here
  {
    cout << "Division: " << a / b;
  }
  else cout<<"You have entered a wrong choice";
  return 0;
}
      //You Havent added the Loop or Jump statement asking user to continue or not
