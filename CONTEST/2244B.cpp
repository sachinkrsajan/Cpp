#include <bits/stdc++.h>
using namespace std;

int main() {

    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        long long int a[n+10];
        bool found=false;
        for(int i=1;i<=n;i++){
            cin>>a[i];
        }
        for(int i=1;i<n;i++){
            if(a[i]<i){
                found = true;
                break;
            }
            a[i+1]+=a[i]-i;
        }
        if(!found && a[n]<n){
            found=true;
        }
        if(found){
            cout<<"NO"<<endl;
        }
        else{
            cout<<"YES"<<endl;
        }
    }

    return 0;
}