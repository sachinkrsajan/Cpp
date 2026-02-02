#include <bits/stdc++.h>
using namespace std;

int main(){

    //--------2D ARRAY--------------
    /* 
        0,0  0,1  0,2 
        1,0  1,1  1,2
        2,0  2,1  2,2
    
    */
    // a1[rows][columns]

    int n1,n2;
    cout<<"A:";
    cin>>n1;
    cout<<"B:";
    cin>>n2;
    int a1[n1][n2];

    for(int i=0;i<n1;++i){  // rows loop
        for(int j=0;j<n2;++j){  // column loop
            cin>>a1[i][j];
        }
    }
    for(int i=0;i<n1;++i){
        for(int j=0;j<n2;++j){
            cout<<a1[i][j]<<" ";
        }
        cout<<endl;
    }
 
    


}