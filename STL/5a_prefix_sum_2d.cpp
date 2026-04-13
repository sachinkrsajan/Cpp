/*
Given 2d array of N*N integers .Given Q
queries and in each given a,b,c,d
print sum of square represented by(a,b) as top
left point of point and (c,d as bottom right point

constraints:
1 <= N <= 10^3
1 <= a[i][j] <= 10^9
1 <= Q <= 10^5
1 <= a,b,c,d <= N

*/

// #include <bits/stdc++.h>
// using namespace std;
// const int N=1e3+10;
// int arr[N][N];
// int main() {

//     int n;
//     cin>>n;
//     for(int i=1;i<=n;i++){
//         for(int j=1;i<=n;i++){
//             cin>>arr[i][j];
//         }
//     }

//     int q;
//     cin>>q;
//     while(q--){
//         int a,b,c,d;
//         cin>>a>>b>>c>>d;
//         long long sum=0;
//         for(int i=a;i<=c;i++){
//             for(int j=a;i<=c;i++){
//                 sum+=arr[i][j];
//             }
//         }
//     }
//     // O(N^2) + O(Q*N^2) -->10^5 * 10^6
//     return 0;
// }

#include <bits/stdc++.h>
using namespace std;
const int N = 1e3 + 10;
int arr[N][N];
long long pf[N][N];
int main()
{

    int n;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; i <= n; i++)
        {
            cin >> arr[i][j];
            pf[i][j] = arr[i][j] + pf[i - 1][j] + pf[i][j - 1] - pf[i - 1][j - 1];
        }
    }

    int q;
    cin >> q;
    while (q--)
    {
        int a, b, c, d;
        cin >> a >> b >> c >> d;
        cout << pf[c][d] - pf[a - 1][d] - pf[c][b - 1] + pf[a - 1][b - 1] << endl;
        // O(N^2) + O(Q) -->10^6 + 10^5
    }
    return 0;
}