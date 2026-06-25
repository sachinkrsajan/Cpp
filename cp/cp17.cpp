#include <bits/stdc++.h>
using namespace std;

int main() {

    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        int a[110];
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        if(k>1){
            cout<<"YES"<<endl;
        }
        else{
            bool sorting=true;
            for(int i=0;i<n-1;i++){
                if(a[i]>a[i+1]){
                    sorting=false;
                    break;
                }
            }
            if(sorting) cout<<"YES"<<endl;
            else cout<<"NO"<<endl;
        }
    }

    return 0;
}