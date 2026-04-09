/* 
given T test cases and in each test case
a number N. Print its factorial for each of test cases %M
where M= 10^9+7.

constaints 
1<=T<=10^5
1<=N<=10^5

*/

// #include <bits/stdc++.h>
// using namespace std;
// const int M=1e9+7;

// int main() {
//     int t;
//     cin>>t;
//     while(t--){
//         int n;
//         cin>>n;
//         long long fact=1;
//         for(int i=2;i<=n;i++){
//             fact=(fact*i)%M;
//         }
//         // O(T*N)=10^10 ---> ek second me chalega hi nhi ye
//         cout << fact << endl;
//     }

//     return 0;
// }


// now we try to pre compute:

#include <bits/stdc++.h>
using namespace std;
const int M=1e9+7;
const int N=1e5+10;
long long fact[N];

int main(){
    fact[0]=fact[1]=1;
    for(int i=2;i<N;i++){
        fact[i]=fact[i-1]*i;
    }
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        cout << fact << endl;
        
        //O(T*N)=10^10 OLD
        //O(N)+0(T)=10^5+10^5 NEW
    }
    return 0;
}