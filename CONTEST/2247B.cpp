#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin>>t;

    while (t--){
        int n,k;
        long long m;
        cin >>n>>k>>m;

        if(k>m){
            cout<<"NO\n";
            continue;
        }
        cout<<"YES\n";
        vector<long long>p(n+1);
        p[0]=0;
        for (int i=1;i<=n;i++)
            p[i]=i%k;

        for (int i=1;i<=n;i++){
            long long diff=p[i]-p[i-1];
            if(diff<=0)
                diff+=m;
            cout<<diff<<" ";
        }
        cout<<"\n";
    }

    return 0;
}