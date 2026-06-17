#include <bits/stdc++.h>
using namespace std;

int main() {

    int t;
    cin>>t;
    while(t--){
        int n,x,y,z;
        cin>>n>>x>>y>>z;
        int l=(n+(x+y)-1)/(x+y);
        int rem=max(0,n-z*x);
        int lz=z+(rem+(x+10*y)-1)/(x+10*y);
        cout<<min(l,lz)<<endl;
    }

    return 0;
}