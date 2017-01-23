#include <iostream>
using namespace std;
int main() {
int n,i;
int fibo1=0,fibo2=1,fibonext;
cout<<"Enter a number: \n";
cin>>n;

for(i=0;i<n;i++) {
	fibonext=fibo1+fibo2;
	fibo1=fibo2;
	fibo2=fibonext;
	cout<<fibonext<<"\n";

}
return 0;
}
