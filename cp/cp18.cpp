#include <bits/stdc++.h>
using namespace std;

int main() {

    int t;
    cin>>t;
    while(t--){
        int n,x;
        cin>>n>>x;
        int a[n+5];
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        int xl=a[0];
        
        for(int i=0;i<n-1;i++){
            xl=max(xl,a[i+1]-a[i]);
        }
        cout<<max(xl,2*(x-a[n-1]))<<endl;
    }

    return 0;
}