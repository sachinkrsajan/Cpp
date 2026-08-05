#include <bits/stdc++.h>
using namespace std;

int main() {

    int n;
    cin>>n;
    string s;
    cin>>s;
    int ct=0;
    string op,ans;
    for(int i=0;i<n-1;i++){
        char a=s[i];
        char b=s[i+1];
        op="";
        op+=a;
        op+=b;
        int ct2=1;
        for(int j=i+1;j<n-1;j++){
            if(s[j]==a&&s[j+1]==b){
                ct2++;
            }
        }
        if(ct2>ct){
            ct=ct2;
            ans=op;
        }
    }
    cout<<ans<<endl;

    return 0;
}