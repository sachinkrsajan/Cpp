/* 
Given two integer arrays a and b, the task is to find the numbers 
which are present in the first array a, but not present in the second array b.

Note: Numbers to be returned should in order as they appear in array a.

Constraints:
1 <= a.size(), b.size() <= 105
1 <= a[i] <= 10^5
1 <= b[i] <= 10^5
*/
// #include <bits/stdc++.h>
// using namespace std;
// const int A=1e5+10;

// int main() {
//     int m,n;
//     cin>>m>>n;
//     int hsh[n]={0};
    
//     int a[m];
//     for (int i=0;i<m;i++){
//         cin>>a[i];
//     }

//     int b[n];
//     for(int i=0;i<n;i++){
//         cin>>b[i];
//     }

//     for(int i=0;i<m;i++){

//     }
//     return 0;

#include <iostream>
using namespace std;

int main() {
    int n, m;
    
    cin >> n;
    int a[n];

    for(int i = 0; i < n; i++) {
        cin >> a[i];
    }

    
    cin >> m;
    int b[m];

    int freq[100001] = {0};

    for(int i = 0; i < m; i++) {
        cin >> b[i];
        freq[b[i]] = 1;   
    }

    for(int i = 0; i < n; i++) {
        if(freq[a[i]] == 0) {
            cout << a[i] << " ";
        }
    }
    return 0;
}