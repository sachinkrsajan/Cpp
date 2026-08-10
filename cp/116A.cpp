#include<bits/stdc++.h>
using namespace std;
int main(){

    int n;cin>>n;
    int cur=0,mx=0;
    while(n--){
        int a,b;cin>>a>>b;
        cur=cur-a+b;
        mx=max(mx,cur);
    }
 cout<<mx;
}