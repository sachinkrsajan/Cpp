#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--){
        long long int n;
        cin >> n;
        bool found=false;
        for (long long int i = 1; i * i <= n; i++) {
            if (n % i == 0) {
                if(i%2!=0&&i>1){
                    found=true;
                    break;
                }

                if (i != n / i){
                    if((n/i)%2!=0&&(n/i)>1){
                    found=true;
                    break;
                    }
                }
            }
        }
        if (found){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;;
        }
    }   
    return 0;
}