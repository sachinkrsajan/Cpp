#include <bits/stdc++.h>
using namespace std;

int main(){
    long long n,m,a;
    cin>>n>>m>>a;

    long long len=ceil(1.0*n/a);
    long long brd=ceil(1.0*m/a);

    cout<<len*brd<<endl;

    return 0;
}