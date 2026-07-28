#include <bits/stdc++.h>
using namespace std;

int main() {

    int t;
    cin>>t;
    while(t--){
        int n,a,b;
        cin>>n>>a>>b;
        string mv;
        cin>>mv;

        int x=0,y=0;
        bool ok=false;
        for(int k=0;k<100&&!ok;k++){
            for(int i=0;i<n;i++){
                if(x==a&&y==b){
                    ok=true;
                    break;
                }
                if(mv[i]=='N') y++;
                else if(mv[i]=='E') x++;
                else if(mv[i]=='S') y--;
                else x--;
                if(x==a&&y==b){
                    ok=true;
                    break;
                }
            }
        }
        if(ok){
            cout<<"YES\n";
        }
        else{
            cout<<"NO\n";
        }
    }

    return 0;
}