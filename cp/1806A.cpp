
#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int t;
    cin>>t;
 
    while(t--){
        long long a,b,x,y;
        cin>>a>>b>>x>> y;
        if (y<b){
            cout<<-1<<endl;
			 continue;
        }
 
        long long inc=y-b;
        a+=inc;
 
        if (a<x) {
            cout<<-1<<endl;
			continue;
        }
 
        cout<<inc+(a-x)<<endl;
    }
 
    return 0;
}