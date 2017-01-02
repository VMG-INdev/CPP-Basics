#include <iostream>
using namespace std;
int main()
{
    int c,r,i,j;
    cout<<"Enter the number of rows:";
    cin>>r;
    cout<<"Enter number of columns:";
    cin>>c;
    for(i=0;i<c;i++)
        {
            for(j=0;j<r;j++)
            {
            cout<<"*";
            }
            cout<<endl;
    }
    return 0;
}
