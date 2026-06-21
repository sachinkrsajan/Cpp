#include <bits/stdc++.h>
using namespace std;
int main() {

    int t;
    cin>>t;
    int x=0;
    while(t--){
        int a,b;
        cin>>a>>b;
        if(a<b){
            x=b-a;
        }
        else{
            if(a%b==0){
                x=0;
            }
            else{
                x=b-(a%b);
            }
        }
        cout<<x<<endl;
    }

    return 0;
}