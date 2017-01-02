#include <iostream>
using namespace std;
int main() {
int row,col,j,n;
cout<<"Enter number of rows: \n";
cin>>n;
for(row=0;row<n;row++) {
    for(col=0;col<row;col++) {
        cout<<" ";
    }
    for(j=0;j<2*n-1-2*row;j++) {
        cout<<"*";
    }
    cout<<"\n";
}
return 0;
}
