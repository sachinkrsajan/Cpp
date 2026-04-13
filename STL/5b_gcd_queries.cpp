/*
you are given an array A of integers size N .
You will be given Q queries where each query is represented by two integers L,R. You have to
find the gcd of the array after excludng the part from range L to R inclusive (1 based indexing).
You are guaranteed that after excluding the part of the array
remaining array is non empty.


*/
// #include <bits/stdc++.h>
// using namespace std;

// int main() {

//     int t;
//     cin>>t;
//     while(t--){
//         int n,q;
//         cin>>n>>q;
//         int a[n+10];
//         for(int i=1;i<=n;i++){
//             cin>>a[i];
//         }
//         while(q--){
//             int l,r;
//             cin>>l>>r;
//             int gc=0;
//             for(int i=1;i<=l-1;i++){
//                 gc=__gcd(gc,a[i]);
//             }
//             for(int i=r+1;i<=n;i++){
//                 gc=__gcd(gc,a[i]);
//             }
//         cout<<gc<<endl;
//         }
//     }
//     //O(T*(N+q*(N)))=N^3
//     return 0;
// }


#include <bits/stdc++.h>
using namespace std;

int main() {

    int t;
    cin>>t;
    while(t--){
        int n,q;
        cin>>n>>q;
        int a[n+10];
        int forward[n+10];
        int backward[n+10];
        forward[0]=backward[n+1]=0;
        for(int i=1;i<=n;i++){
            cin>>a[i];
        }
        for (int i = 1; i <=n; i++)
        {
            forward[i]=__gcd(forward[i-1],a[i]);
        }
        for (int i = n; i >=1; i--)
        {
            backward[i]=__gcd(backward[i+1],a[i]);
        }
        while(q--){
            int l,r;
            cin>>l>>r;
            cout<<__gcd(forward[l-1],backward[r+1])<<endl;
        }
    }
    //O(T*(N+N))=10^6
    return 0;
}
