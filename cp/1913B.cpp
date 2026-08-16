#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;

        int z=0,o=0;
        for(char c:s){
            if(c=='0') z++;
            else o++;
        }

        int ans=0;
        for(char c:s){
            if(c=='0' && o>0) o--;
            else if(c=='1' && z>0) z--;
            else break;
            ans++;
        }

        cout<<s.size()-ans<<'\n';
    }
}