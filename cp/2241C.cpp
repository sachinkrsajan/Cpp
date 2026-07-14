#include <bits/stdc++.h>
using namespace std;

int main() {

    int t;
    cin>>t;
    while(t--){
        int n;
        string s;
        cin>>n>>s;
        int tran=0;
        for(int i=0;i<n-1;i++){
            if(s[i]!=s[i+1]) tran++;
        }

        if(tran==1){
            cout<<2<<endl;
        }
        else{
            cout<<1<<endl;
        }
    }

    return 0;
}