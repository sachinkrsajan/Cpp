#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;

    while(t--) {
        string s;
        cin>>s;

        int balance=0;
        bool st=false;

        for(int i=0;i<s.size()-1;i++){
            if(s[i]=='(')
                balance++;
            else
                balance--;

            if(balance==0){
                st=true;
                break;
            }
        }

        cout<<(st?"YES\n":"NO\n");
    }

    return 0;
}