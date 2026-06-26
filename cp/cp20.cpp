#include <bits/stdc++.h>
using namespace std;

int main() {

    int t;
    cin>>t;
    
    while(t--){
        int n,a[55];
        cin>>n;
        for(int i=0;i<n;i++) cin>>a[i];
        sort(a,a+n);
        if(a[0]==a[n-1]) cout<<"NO"<<endl;
        else{
            cout<<"YES"<<endl;
            swap(a[0],a[n-1]);
            for(int i=0;i<n;i++){
                cout<<a[i]<<" ";
            }
            cout<<endl;
        }
    }
    return 0;
}