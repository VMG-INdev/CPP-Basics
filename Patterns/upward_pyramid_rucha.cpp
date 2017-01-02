#include <iostream>
using namespace std;
int main() {
    int n,row,col,j;
    cout<<"Enter number of rows: \n";
    cin>>n;
    for(row=0;row<n;row++) {
        for(col=0;col<n-1-row;col++) {
            cout<<" ";
        }
        for(j=0;j<2*row+1;j++) {
            cout<<"*";
        }
        cout<<"\n";
    }
    return 0;
}
