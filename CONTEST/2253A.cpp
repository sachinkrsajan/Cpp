#include <bits/stdc++.h>
using namespace std;

int main() {

    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int ok=0;
        for(int i=2;i<n+1;i++){
            if((n+1)%i==0){
                ok=1;
                break;
            }
        }
        if(ok){
            cout<<"NO\n";
        }
        else{
            cout<<"YES\n";
        }
    }

    return 0;
}