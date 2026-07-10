#include <bits/stdc++.h>
using namespace std;

int main() {

    int t;
    cin>>t;
    cin.ignore();
    while(t--){
        string s;
        getline(cin,s);
        vector<char> k;
        k.push_back(s[0]);
        for(int i=1;i<s.length();i++){
            if(s[i]==' '&i+1<s.length()){
                k.push_back(s[i+1]);
            }
        }
        for(int i=0;i<k.size();i++){
            cout<<k[i];
        }
        cout<<endl;
    }

    return 0;
}