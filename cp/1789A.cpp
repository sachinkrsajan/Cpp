#include <bits/stdc++.h>
using namespace std;

int main() {

    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int a[n];
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        bool beautiful=false;
        for(int i=0;i<n;i++){
            for(int j=i+1;j<n;j++){
                if(__gcd(a[i],a[j])<=2){
                    beautiful=true;
                }
            }
            if(beautiful) break;
        }
        if(beautiful) cout<<"YES\n";
        else cout<<"NO\n";
    }

    return 0;
}