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
if(x=='+') {
cout<<"Sum of "<<a<<" and "<<b<<" is "<<a+b;
} 
else if(x=='-'){
cout<<"Difference of "<<a<<" and "<<b<<" is "<<a-b;
}
else if(x=='*') {
cout<<"Product of "<<a<<" and "<<b<<" is"<<a*b;
}
else if(x=='/') {
cout<<"Division of "<<a<<" and "<<b<<" is "<<a/b; 
}
else {
cout<<"enter a valid operation: \n";
}
return 0;
}
