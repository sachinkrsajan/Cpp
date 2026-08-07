#include <bits/stdc++.h>
using namespace std;

int main() {

    int t;
    cin>>t;
    while(t--){
        long long int n;
        cin>>n;
        long long int arr[n+10];
        long long int max_f=0;
        for(long long int i=0;i<n;i++){
            long long int x;
            cin>>x;
            arr[x]++;
            if(arr[x]>max_f){
                max_f=arr[x];
            }
        }
        if((max_f+1)/2<=n){
            cout<<n<<endl;;
        }
        else{
            cout<<max_f-(max_f-((n+1)/2))+n-max_f<<endl;
        }
    }
    return 0;
}