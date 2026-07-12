#include <bits/stdc++.h>
using namespace std;

int main() {

    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int a[n]={0};
        int same=0;
        int count_2=0;
        for(int i=0;i<n;i++){
            cin>>a[i];
            same=max(same,a[i]);
        }
        if(n==1&&same<2){
            cout<<"NO\n";
        }
        else{
            for(int i=0;i<n;i++){
                if(a[i]==2){
                    count_2++;
                }
            }
            if(same>=3||count_2>=2){
                cout<<"YES"<<endl;
            }
            else{
                cout<<"NO"<<endl;
            }
        }
    }

    return 0;
}