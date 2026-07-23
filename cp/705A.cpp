#include <bits/stdc++.h>
using namespace std;

int main() {

    string h="I hate";
    string l="I love";
    int n;
    cin>>n;
    if(n==1){
        cout<<"I hate it"<<endl;
    }
    else{
        int t=0;
        int k=0;
        while(n--){
            if(t==0){
                cout<<h<<" ";
                t=1;
            }
            else{
                cout<<l<<" ";
                t=0;
            }
            if(n>=1){
                cout<<"that ";
            }
        }
        cout<<"it";
    }
    
    return 0;
}