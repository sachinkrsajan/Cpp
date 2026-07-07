#include <bits/stdc++.h>
using namespace std;

int main() {
    long long n,m;
    cin>>n>>m;
    long long curr=1,ans=0;

    for(int i=0;i<m;i++){
        long long x;
        cin>>x;

        if(x>=curr)
            ans+=x-curr;
        else
            ans+=(n-curr)+x;

        curr=x;
    }
    cout<<ans<<endl;
    return 0;
}