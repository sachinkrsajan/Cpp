#include <bits/stdc++.h>
using namespace std;

int main() {

    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int zero=0;
        int np=0;
        for(int i=0;i<n;i++){
            int x;
            cin>>x;
            if(x==0){
                zero++;
            }
            else if(x==-1){
                np++;
            }
        }
        if(np%2==0){
            cout<<zero<<endl;
        }
        else{
            cout<<2+zero<<endl;
        }
    }
    return 0;
}