#include <bits/stdc++.h>
using namespace std;

int main() {

    int n,m;
    cin>>n>>m;
    int op=0;
    int max=0;
    for(int i=0;i<n;i++){
        int x;
        cin>>x;

        int rn=(x+m-1)/m;
        if(rn>=max){
            max=rn;
            op=i+1;
        }
    }
    cout<<op<<endl;
    return 0;
}