#include <bits/stdc++.h>
using ll=long long;
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--){
        ll n,a,b;
        cin>>n>>a>>b;
        if(b>=3*a){
            cout<<a*n<<endl;
        }
        else{
            int gp=n/3.0;
            int ind=n%3;
            if(b>ind*a){
                cout<<(b*gp)+(ind*a)<<endl;
            }
            else{
                cout<<(b*gp)+b<<endl;
            }
        }
    }
    return 0;
}