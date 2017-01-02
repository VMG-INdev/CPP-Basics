#include <iostream>

using namespace std;

int main()
{
    int r,i,j;
    cout<<"Enter the number of rows: ";
    cin>>r;

    for(i=1;i<r;i++)
    {
        for(j=1;j<r-i;j++)
        {
            cout<<" ";
        }
        for(j=1;j<=i*2-1;j++)
        {
            cout<<"*";
        }
        cout<<"\n";
    }
        for(i=1;i<r;i++)
        {
                for(j=1;j<=i-1;j++)
                {
                    cout<<" ";
                }

        for(j=1;j<2*(r-i);j++)
        {
            cout<<"*";
        }
        cout<<endl;
        }

    return 0;
    }
