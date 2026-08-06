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
        int e1=0,o1=0,e0=0,o0=0;
        for(int i=0;i<s.size();i++){
            if(s[i]=='1'){
                if(i%2==0){
                    e1++;
                }
                else{
                    o1++;
                }
            }
            if(s[i]=='0'){
                if(i%2==0){
                    e0++;
                }
                else{
                    o0++;
                }
            }
        }
        int one=e1+o1;
        int zero=e0+o0;
        bool found=false;
        for(int i=0;i<n;i++){
            if(e1>e0){
                //unsolved later
            }
        }
    }

    return 0;
}