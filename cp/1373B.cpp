#include <bits/stdc++.h>
using namespace std;

int main() {

    int t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        int zero=0;
        int one=0;
        for(int i=0;i<s.length();i++){
            if(s[i]=='0'){
                zero++;
            }
            else{
                one++;
            }
        }
        int m=min(zero,one);
        if(m%2!=0){
            cout<<"DA"<<endl;
        }
        else{
            cout<<"NET"<<endl;
        }
    }

    return 0;
}