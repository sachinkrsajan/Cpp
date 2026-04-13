// https://codeforces.com/problemset/problem/1881/A



#include <bits/stdc++.h>
using namespace std;

int main() {

    int t;
    cin>>t;
    while(t--){
        int n,m;
        cin>>n>>m;

        string x,s;
        cin>>x>>s;

        int answer=-1;
        for(int i=0;i<=5;i++){
            if(x.find(s)!=string::npos){
                answer=i;
                break;
            }
            x+=x;
        }
        cout<<answer<<endl;
    }

    return 0;
}