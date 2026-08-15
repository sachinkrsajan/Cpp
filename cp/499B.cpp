#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,m;
    cin>>n>>m;

    string a[3005],b[3005];

    for(int i=0;i<m;i++)
        cin>>a[i]>>b[i];

    for(int i=0;i<n;i++){
        string x;
        cin>>x;

        for(int j=0;j<m;j++){
            if(x==a[j]){
                if(a[j].size()<=b[j].size())
                    cout<<a[j]<<" ";
                else
                    cout<<b[j]<<" ";
                break;
            }
        }
    }

    return 0;
}