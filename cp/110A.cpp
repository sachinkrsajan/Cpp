#include <bits/stdc++.h>
using namespace std;

int main() {

    long long n;
    cin>>n;
    int nl=0;
    while(n){
        int x=n%10;
        if(x==4||x==7){
            nl++;
        }
        n/=10;
    }
    if(nl==4||nl==7){
        cout<<"YES\n";
    }
    else{
        cout<<"NO\n";
    }

    return 0;
}