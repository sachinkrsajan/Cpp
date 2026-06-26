#include <bits/stdc++.h>
using namespace std;

int main() {

    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int empty=0;
        string a;
        cin>>a;
        for(int i=0;i<n;i++){
            if(a[i]=='.'){
                empty++;
            }
        }
        bool s=false;
        for(int i=0;i<n-2;i++){
            if(a[i]=='.' && a[i+1]=='.' && a[i+2]=='.'){
                s=true;
                break;
            }
        }
        if(s) cout<<2<<endl;
        else cout<<empty<<endl;
    }

    return 0;
}