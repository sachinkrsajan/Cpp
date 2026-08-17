#include<bits/stdc++.h>
using namespace std;

int main(){


    int t;
    cin>>t;

    while(t--){
        long long n,k;
        cin>>n>>k;

        long long ans=0;
        long long p=1;

        while(n>=k*p){
            n-=k*p;
            ans+=k;
            p*=2;
        }

        ans+=n/p;

        cout<<ans<<"\n";
    }
}