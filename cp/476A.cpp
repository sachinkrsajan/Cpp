#include <bits/stdc++.h>
using namespace std;

int main() {

    int n,m;
    cin>>n>>m;
    int x=(n+1)/2;
    int y=x/m;
    if((y*m)<x){
        y++;
    }
    int z=y*m;
    if(z<=n){
        cout<<z<<endl;
    }
    else{
        cout<<-1<<endl;
    }
    return 0;
}