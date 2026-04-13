// https://codeforces.com/problemset/problem/1766/A

#include <bits/stdc++.h>
using namespace std;

int main() {

    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int length=(to_string(n)).length();
        int first_digit=(to_string(n))[0]-'0';
        cout<<9*(length-1)+first_digit<<endl;
    }

    return 0;
}