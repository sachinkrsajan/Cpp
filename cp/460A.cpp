#include <bits/stdc++.h>
using namespace std;

int main() {
    int n,m;
    cin>>n>>m;
    int days=0,used=0;
    while(n){
        n--;
        days++;
        used++;
        if(used==m){
            n++;
            used=0;
        }
    }
    cout<<days<<endl;
    return 0;
}