#include <iostream>

using namespace std;

int main()
{
    int r,i,j;
     cout<<"Enter the number of rows: ";
     cin>>r;

      for (i=0;i<r;i++)
      {
          for(j=0;j<r-i;j++)
          {
              cout<<"*";
          }
          cout<<endl;
      }

    return 0;
}
