#include <bits/stdc++.h>
using namespace std;

int main() {

    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        string s;
        cin>>s;
        int op=1;
        for(int i=1;i<n-1;i++){
            if(s[i]!=s[i-1]) op++;
        }
        // not solved
        cout<<op<<endl;
    }
    return 0;
}