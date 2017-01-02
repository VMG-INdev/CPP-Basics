#include <iostream>
using namespace std;
int main() {
int j,col,row,n;
cout<<"Enter the number of rows: \n";
cin>>n;
for(row=0;row<(n+1)/2;row++) {
    for(col=0;col<row;col++) {
        cout<<" ";
    }
    for(j=0;j<4;j++) {
        cout<<"*";
    }
    cout<<"\n";
}
for(row=0;row<((n+1)/2)-1;row++) {
    for(col=0;col<((n+1)/2)-row-2;col++) {
        cout<<" ";
    }
    for(j=0;j<4;j++) {
        cout<<"*";
    }
    cout<<"\n";
}

    return 0;
}
