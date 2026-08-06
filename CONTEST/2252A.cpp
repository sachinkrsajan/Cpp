#include <bits/stdc++.h>
using namespace std;

int main() {

    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int frq[1001]={0};
        int sum=0;
        int maxf=0;
        int mval=0;
        for(int i=0;i<n;i++){
            int x;
            cin>>x;
            sum=sum+x;
            frq[x]++;
            if(frq[x]>maxf){
                maxf=frq[x];
                mval=x;
            }
        }
        if(maxf<=(n+1)/2){
            cout<<sum<<endl;
        }
        else{
            int rm=maxf-(n-maxf+2);
            cout<<sum-rm*mval<<endl;
        }

        
    }
    return 0;
}