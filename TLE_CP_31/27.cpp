// https://codeforces.com/problemset/problem/1788/A

#include <bits/stdc++.h>
using namespace std;

int main() {

    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int tl=0;
        int arr[n+10];
        for(int i=1;i<=n;i++){
            int x;
            cin>>x;
            arr[i]=x;
            if(x==2){
                tl++;
            }
        }
        int ct=0;
        int imp=-1;
        int index=0;
        if(tl%2==0 && tl!=0){
            for(int i=1;i<=n;i++){
                if(arr[i]==2){
                    ct++;
                }
                if(ct==tl/2){
                    index=i;
                    break;
                }
            }
            cout<<index<<endl;
        }
        else if(tl==0){
            cout<<1<<endl;
        }
        else{
            cout<<imp<<endl;
        }
    }

    return 0;
}