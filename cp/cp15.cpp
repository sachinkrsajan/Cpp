#include <bits/stdc++.h>
using namespace std;

int main() {

    int n,h;
    cin>>n>>h;
    int h1[n];
    int x=0;
    for(int i=0;i<n;i++){
        cin>>h1[i];
        if(h1[i]<=h){
            x++;
        }
        else if(h1[i]>h){
            x++;x++;
        }
    }
    cout<<x<<endl;

    return 0;
}