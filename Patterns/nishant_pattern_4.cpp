#include <iostream>
using namespace std;
int main()
{
    int i,j,r;
    cout<<"Enter the number of rows: ";
    cin>>r;
    for(i=0;i<r;i++)
    {
        for(j=0;j<r-i-1;j++){  cout<<" ";
        }
           for(j=0;j<=i;j++){

        cout<<"*";
               }
            cout<<endl;
    }
    return 0;
}
