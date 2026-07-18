#include <bits/stdc++.h>
using namespace std;

int main() {

    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int c=0;
        for(int i=0;i<n;i++){
            int x;
            cin>>x;
            if(x==1) c++;
        }
        if(n%2!=0){
            cout<<"NO\n";
        }
        else{
            if(c%2==(n/2)%2){
                cout<<"YES\n";
            }
            else{
                cout<<"NO\n";
            }
        }
    }

    return 0;
}