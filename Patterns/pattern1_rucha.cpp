#include <iostream>
using namespace std;
int main() {


    int n,i,j,x,j1,noofcol;
    char p;
    cout<<"enter number of rows: \n";
    cin>>n;
    cout<<"enter number of coloumns: \n";
    cin>>noofcol;


    
    do {
     cout<<"Enter your choice: \n";
     cout<<"Enter your choice"<<endl<<"1) Square"<<endl<<"2) Rectangle"<<endl<<"3) Right angled triangle (left-up)"<<endl<<"4) Right angled triangle (right-up)"<<endl<<"5) Right angled triangle (left down)"<<endl<<"6) Right angled triangle (right-down)"<<endl<<"7) Pyrmid(up)"<<endl<<"8) pyramid (down)";
         cin>>x;
         if(x==1){
            for(i=0;i<n;i++){
                for(j=0;j<n;j++){
                cout<<"*";

            }
            cout<<endl;
         }
         }


         else if(x==2) {
            for(i=0;i<n;i++) {
                for(j=0;j<noofcol;j++) {
                    cout<<"*";
                }
                cout<<endl;
            }

         }
         else if(x==3) {
            for(i=0;i<n;i++) {
                for(j=0;j<i;j++) {
                    cout<<"*";
                }
                cout<<endl;
            }
         }


         else if(x==4) {
            for(i=0;i<n;i++) {
                for(j=0;j<noofcol;j++) {
                    cout<<" ";
                }
                noofcol--;
                for(j1=0;j1<i;j1++) {
                    cout<<"*";
                }
                cout<<endl;
            }
         }


         else if(x==5) {
            for(i=0;i<n;i++) {
                for(j=0;j<noofcol;j++) {
                    cout<<"*";
                }
                noofcol--;
                cout<<endl;
            }
        }


        else if(x==6) {
            for(i=0;i<n;i++) {
                for(j1=0;j1<noofcol;j1++) {
                    cout<<" ";
                }
                noofcol--;
                for(j1=0;j1<i;j1++) {
                    cout<<"*";
                }
                cout<<endl;
            }
        }
        cout<<"Do you wish to continue? \n Enter Y for continuing and N for exiting \n";
        cin>>p;
}


while(p=='Y');
return 0;


}
