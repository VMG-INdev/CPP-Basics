#include <iostream>
using namespace std;
int main() {
float a;
int b;
char x;
cout<<"enter first digit: \n";
cin>>a;
cout<<"enter second digit: \n";
cin>>b;
cout<<"select operation: '+' , '-' , '*' , '/' \n ";
cin>>x;
switch(x) {
case '+':
cout<<"Sum of "<<a<<" and "<<b<<" is "<<a+b;
break;
case'-':
cout<<"Difference of "<<a<<" and "<<b<<" is "<<a-b;
break;
case '*':
cout<<"Product of "<<a<<" and "<<b<<" is"<<a*b;
break;
case '/': 
cout<<"Division of "<<a<<" and "<<b<<" is "<<a/b; 
break;
}
cout<<"Enter a valid operation \n";
return 0;
}
