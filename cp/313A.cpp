#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin>>n;
    int a=n%10;int b=(n/10)%10;
    if(n>=0){
        cout<<n<<endl;
    }
    else{
        if(a<b){
            cout<<(n/10)<<endl;
        }
        else{
            cout<<((n/100)*10)+a<<endl;
        }
    }
    return 0;
}