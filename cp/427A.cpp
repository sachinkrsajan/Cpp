#include <bits/stdc++.h>
using namespace std;

int main() {

    int n;
    cin>>n;
    int op=0;
    int pol=0;
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        if(x==-1){
            if(pol>0) pol--;
            else op++;  
        }
        else{
            pol+=x;
        }
    }
    cout<<op<<endl;
    return 0;
}