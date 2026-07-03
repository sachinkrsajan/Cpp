#include <bits/stdc++.h>
using namespace std;

int main() {

    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int a[n]={0};
        int sum=0;
        int neg=0;
        for(int i=0;i<n;i++){
            cin>>a[i];
            sum+=a[i];
            if(a[i]<0){
                neg++;
            }
        }
        int ans=0;
        while (sum<0) {
            sum += 2;
            neg--;
            ans++;
        }
        if (neg % 2 != 0)
            ans++;
        cout << ans << endl;
        
    }

    return 0;
}