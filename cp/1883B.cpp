#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;

        string s;
        cin>>s;

        int hsh[26]={0};

        for(int i=0;i<s.length();i++){
            hsh[s[i]-'a']++;
        }
        int odd=0;
        for (int i=0;i<26;i++){
            if (hsh[i]%2)
                odd++;
        }

        if (odd - 1 <= k)
            cout << "YES\n";
        else
            cout << "NO\n";
    }

    return 0;
}