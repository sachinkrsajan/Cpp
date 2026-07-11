#include <bits/stdc++.h>
using namespace std;

int main() {

    int n;
    cin>>n;
    int a[n];
    int mh=0,mhi=0;
    for(int i=0;i<n;i++){
        cin>>a[i];
        if(a[i]>mh){
            mh=a[i];
            mhi=i;
        }
    }
    int sh=mh,shi=0;
    for(int i=0;i<n;i++){
        if(a[i]<=sh){
            sh=a[i];
            shi=i;
        }
    }
    int op=mhi+(n-1-shi);
    if(mhi>shi)op--;
    cout<<op<<endl;


    return 0;
}