#include <bits/stdc++.h>
using namespace std;

int main() {

    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        int a[n];
        int initial_sum=0;
        for(int i=0;i<n;i++){
            cin>>a[i];
            initial_sum=initial_sum+a[i];
        }
        if(initial_sum%2!=0){
            cout<<"YES"<<endl;
        }
        else{
            if((n*k)%2==0){
                cout<<"YES"<<endl;
            }
            else{
                cout<<"NO\n";
            }
        }

    }

    return 0;
}