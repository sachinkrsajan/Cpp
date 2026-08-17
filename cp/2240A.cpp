#include<bits/stdc++.h>
using namespace std;

int main(){

    int t;
    cin>>t;

    while(t--){
        long long n,k;
        cin>>n>>k;

        long long ans=0;

        while(k>0){
            long long x=min(k,n);
            ans+=x;
            n-=x;
            k-=x;
        }

        cout<<ans<<"\n";
    }
}