#include <bits/stdc++.h>
using namespace std;

int main() {

    long long n;
    int k,w;
    cin>>k>>n>>w;
    int price=0;
    for(int i=1;i<=w;i++){
        price=price+(i*k);
    }
    if((n-price)>0){
        cout<<0<<endl;
    }
    else{
        cout<<abs(n-price)<<endl;
    }
    return 0;
}