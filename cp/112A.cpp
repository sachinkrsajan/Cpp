#include <bits/stdc++.h>
using namespace std;

int main() {

    string s,k;
    cin>>s>>k;
    int op=-1;
    for(int i=0;i<s.length();i++){
        if(tolower(s[i])>tolower(k[i])){
            op=1;
            break;
        }
        else if(tolower(s[i])<tolower(k[i])){
            op=-1;
            break;
        }
    }
    for(int i=0;i<s.length();i++){
        s[i]=tolower(s[i]);
        k[i]=tolower(k[i]);
    }
    if(s==k){
        op=0;
    }
    cout<<op<<endl;

    return 0;
}