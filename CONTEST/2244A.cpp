#include <bits/stdc++.h>
using namespace std;

int main() {

    int t;
    cin>>t;
    while(t--){
        int n;
        string s;
        cin>>n>>s;
        
        int m=0,ct=0;
        for(int i=0;i<n;i++){
            if(s[i]=='#'){
                ct++;
                m=max(m,ct);
            }
            else{
                ct=0;
            }
        }
        cout<<(m+1)/2<<endl;
    }

    return 0;
}