#include <iostream>
using namespace std;
int main() {
    int row,col,j,n;
    cout<<"Enter number of rows: \n";
    cin>>n;
    for(row=0;row<(n+1)/2;row++) {
        for(col=0;col<row;col++) {
            cout<<"*";
        }
        cout<<"\n";
    }
    for(row=0;row<(n+1)/2;row++) {
        for(col=0;col<((n+1)/2)-row;col++) {
            cout<<"*";
        }
        cout<<"\n";
    }
    return 0;
}
