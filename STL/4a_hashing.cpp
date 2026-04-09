/*
GIVEN ARRAY OF N INTEGERS. GIVEN Q QUERIES
AND IN EACH QUERY GIVEN A NUMBER X , PRINT
COUNT OF THAT NUMBER IN ARRAY.

CONSTRAINTS:
1 <= N <= 10^5
1 <= a[i] <=10^7
1 <= Q <= 10^5
*/

#include <bits/stdc++.h>
using namespace std;

int main() {

    int n;
    cin>>n;
    int a[n];
    for (int i=0; i<n;i++){
        cin>>a[i];
    }
    int q;cin>>q;
    while(q--){
        int x;
        cin>>x;
        int ct=0;
        for(int i=0;i<n;i++){
            if(a[i]==x){
                ct++;
            }
        }
        cout<<ct<<endl;
    }

    // O(N) + O(Q*N) --> O(N^2) ek sec me nhi chalega
    return 0;
}



// now we pre compute:
#include <bits/stdc++.h>
using namespace std;
const int N=1e7+10;
int hsh[N];

int main() {
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;++i){
        cin>>a[i];
        hsh[a[i]]++;
    }
    int q;
    cin>>q;
    while(q--){
        int x;
        cin>>x;
        cout<< hsh[x] << endl;
    }
    // O(N) + O(Q*N) --> O(N^2) ek sec me nhi chalega
    // O(N) + O(Q) --> O(2*N) NEW

    return 0;
}