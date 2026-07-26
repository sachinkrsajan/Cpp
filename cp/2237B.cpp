#include<bits/stdc++.h>
#define pb push_back
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<long long>a,b;
        for(int i=0;i<n;i++){
            long long x;
            cin>>x;
            a.pb(x);
        }
        for(int i=0;i<n;i++){
            long long x;
            cin>>x;
            b.pb(x);
        }
        vector<int>vis(n);
        long long op=0;
        bool ok=1;
        for(int i=0;i<n;i++){
            bool found=0;
            for(int j=0;j<n;j++){
                if(!vis[j]&&a[j]<=b[i]){
                    vis[j]=1;
                    found=1;
                    break;
                }
                if(!vis[j]) op++;
            }
            if(!found){
                ok=0;
                break;
            }
        }
        if(!ok) cout<<-1<<'\n';
        else cout<<op<<'\n';
    }
    return 0;
}