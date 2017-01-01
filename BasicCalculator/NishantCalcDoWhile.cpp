#include<iostream>
using namespace std;
int main(){
  //declare char
  do{
    int Enteryourchoice,a,b;
    cout<<"Choose any one from following options:\n\t1)Addition\n\t2)Subtraction\n\t3)Multiplication\n\t4)Division"<<endl<<"Enter your choice:";
    cin>>Enteryourchoice;
    cout<<"Enter 2 numbers"<<endl;
    cin>>a>>b;
    if(Enteryourchoice==1){
      cout<<"Addition"<<a+b;
    }
    else if(Enteryourchoice==2){
      cout<<"Subtraction"<<a-b;
    }
    else if(Enteryourchoice==3){
      cout<<"Multiplication"<<a*b;
    }
    else if(Enteryourchoice==4){
      cout<<"Division"<<a/b;
    }
    else cout<<"You have entered a wrong choice";
    //get input to the char
  }while(Enteryourchoice >=1 && Enteryourchoice <=4 );//condition if char is 'y' or 'Y'
  return 0;
}
