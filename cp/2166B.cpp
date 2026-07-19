#include <bits/stdc++.h>
using ll=long long;
using namespace std;

int main() {

    int t;
    cin>>t;
    while(t--){
        ll a,b,n;
        cin>>a>>b>>n;
        if(b==a||n*b<=a){
            cout<<1<<endl;
        }
        else{
            cout<<2<<endl;
        }
    }
    return 0;
}