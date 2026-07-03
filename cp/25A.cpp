#include <bits/stdc++.h>
using namespace std;

int main() {

    int n;
    cin>>n;
    int a[n]={0};
    int odd_count=0;
    int odd_index=0;
    int even_count=0;
    int even_index=0;
    for(int i=0;i<n;i++){
        cin>>a[i];
        if(a[i]%2==0){
            even_count++;
            even_index=i+1;
        }
        else{
            odd_count++;
            odd_index=i+1;
        }
    }
    if(odd_count>even_count){
        cout<<even_index<<endl;
    }
    else{
        cout<<odd_index<<endl;
    }

    return 0;
}