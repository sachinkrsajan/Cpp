// #include <bits/stdc++.h>
// using namespace std;

// int main() {

//     long long int n,k;
//     cin>>n>>k;
//     long long int a[n+5]={0};
//     for(int i=1;i<=n;i++){
//         if(n%2==0){
//             if(i%2!=0){
//                 a[i]=i;
//             }
//             else{
//                 a[(n/2)]=i;
//             }
//         }
//         else{
//             if(i%2!=0){
//                 a[i]=i;
//             }
//             else{
//                 a[(n/2)+1]=i;
//             }
//         }
//     }
//     for(int i=1;i<=n;i++){
//         cout<<a[i]<<" ";
//     }

//     return 0;
// }

#include <bits/stdc++.h>
using namespace std;

int main() {

    long long n,k;
    cin>>n>>k;
    long long odd=(n+1)/2;
    if(k<=odd) cout<<2*k-1;
    else cout<<2*(k-odd);
    return 0;
}