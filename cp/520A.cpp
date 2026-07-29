#include <bits/stdc++.h>
using namespace std;

int main() {

    int n;
    cin>>n;
    string s;
    cin>>s;
    string a="abcdefghijklmnopqrstuvwxyz";

    for(int i=0;i<n;i++){
        s[i]=tolower(s[i]);
        for(int j=0;j<a.size();j++){
            if(s[i]==a[j]){
                a.erase(j,1);
                break;
            }
        }
    }

    if(a.size()==0){
        cout<<"YES\n";
    }
    else{
        cout<<"NO\n";
    }

    return 0;
}