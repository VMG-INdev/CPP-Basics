#include<iostream>
using namespace std;
int main()
{
start:
  int usr_input;
  cout<<"Choose any one from following options:\n\t1)Addition\n\t2)Subtraction\n\t3)Multiplication\n\t4)Division"<<endl<<"\nEnter Your Choice";
  cin>>usr_input;
  float a,b;
  if(usr_input >=1 && usr_input <= 4){
         cout<<"\n\nEnter 2 numbers"<<endl;
         cin>>a>>b;
  }
  switch(usr_input){
  case '1':
    cout << "Addition: " << a + b;
    break;
  case '2':
    cout << "Subraction:" << a - b;
    break;
  case'3':
    cout << "Multiplication:" << a * b;
    break;
  case'4':
    cout << "Division:" << a / b;
    break;
  default:
    cout << "Incorrect input";
  }
  cout << "\n\nDo you want to continue(Y): ";
  char choice;
  cin >> choice;
  if (choice == 'Y' || choice == 'y')
    goto start;
  return 0;
}
