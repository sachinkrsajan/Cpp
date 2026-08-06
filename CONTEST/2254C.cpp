#include <bits/stdc++.h>
using namespace std;

int main() {

    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        string a,b;
        cin>>a>>b;
        int aeven=0, aodd=0, beven=0, bodd=0;
        for(int i=0;i<n;i++){
            if(a[i]=='0'){
                if(i%2==0){
                    aeven++;
                }
                else{
                    aodd++;
                }
            }
            if(b[i]=='0'){
                if(i%2==0){
                    beven++;
                }
                else{
                    bodd++;
                }
            }
        }
        if(aeven==beven&&aodd==bodd){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }

    return 0;
}