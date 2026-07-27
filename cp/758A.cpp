#include <bits/stdc++.h>
using namespace std;

int main() {

    int n;
    cin>>n;
    int a[n];
    int mx=0;
    for(int i=0;i<n;i++){
        cin>>a[i];
        mx=max(a[i],mx);
    }
    int ct=0;
    for(int i=0;i<n;i++){
        ct=ct+(mx-a[i]);
    }
    cout<<ct<<endl;

    return 0;
}