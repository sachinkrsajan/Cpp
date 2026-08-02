#include <bits/stdc++.h>
using namespace std;

int main() {

    int t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        bool found=true;
        bool ok=true;
        for(int i=0;i<s.size();i++){
            if(s[i]=='0'&&found==true){
                found=false;
                continue;
            }
            else if(s[i]=='1' && ok==true){
                ok=false;
                continue;
            }
            cout<<s[i];
        }
        cout<<endl;
    }

    return 0;
}