#include<iostream>
using namesapce std;
int main(){
  int Enteryourchoice,a,b;
  cout<<"Choose any one from following options:\n\t1)Addition\n\t2)Subtraction\n\t3)Multiplication\n\t4)Division"<<endl<<"Enter your choice:";
  cin>>Enter your choice;
  cout<<"Enter 2 numbers"<<endl;
  cin>>a>>b;
if(Enter your choice==1){
  cout<<"Addition"<<a+b;
}
else if(Enter your choice==2){
  cout<<"Subtraction"<<a-b;
}
else if(Enter your choice==3){
  cout<<"Multiplication"<<a*b;
}
else if(Enter your choice==4){
  cout<<"Division"<<a/b;
}
else cout<<"You have entered a wrong choice";
return 0;
}
