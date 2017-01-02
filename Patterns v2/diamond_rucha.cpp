#include <iostream>
using namespace std;
int main() {
    int row,col,j,n;
    cout<<"Enter numberof rows: \n";
    cin>>n;
    for(row=0;row<(n+1)/2;row++) {
        for(col=0;col<((n+1)/2)-1-row;col++) {
            cout<<" ";
        }
        for(j=0;j<2*row+1;j++){
            cout<<"*";
        }
        cout<<"\n";

    }
    for(row=0;row<(n+1)/2;row++) {
        for(col=0;col<row;col++) {
            cout<<" ";
        }
        for(j=0;j<n-2*row;j++) {
            cout<<"*";
        }
        cout<<"\n";
    }
    return 0;
}
