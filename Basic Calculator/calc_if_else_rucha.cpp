using namespace std;
int main() {
  float a;
  int b;//Why int...Why Not Float
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
    cout<<"Difference of "<<a<<" and "<<b<<" is "<<a-b;//Difference is an absolute value, i.e., always positive
  }
  else if(x=='*') {
    cout<<"Product of "<<a<<" and "<<b<<" is"<<a*b;
  }
  else if(x=='/') {
    cout<<"Division of "<<a<<" by "<<b<<" is "<<a/b; 
  }
  else {
    cout<<"Invalid operation: \n";
  }
  return 0;
}
