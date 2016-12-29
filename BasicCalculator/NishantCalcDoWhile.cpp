#include<iostream>
using namespace std;
int main(){
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
  }while(Enteryourchoice >=1 && Enteryourchoice <=4 );//It would be better if I wrote the code myself
  return 0;
}
