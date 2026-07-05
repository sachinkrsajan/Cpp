
#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int t;
    cin>>t;
 
    while(t--){
        int n;
        cin>>n;
        long long int a[n]={0};
        int ct=0;
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        for(int i=0;i<n-1;i++){
            if((a[i]%2==0&&a[i+1]%2==0)||(a[i]%2!=0)&&(a[i+1]%2!=0)){
                ct++;
            }
        }
        cout<<ct<<endl;
    }
    return 0;
}