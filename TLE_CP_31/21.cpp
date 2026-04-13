// https://codeforces.com/problemset/problem/1829/B

#include <bits/stdc++.h>
using namespace std;

int main()
{

    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int a[n];
        int x;
        int count = 0, maxi = 0;
        for (int i = 0; i < n; i++)
        {   
            cin>>a[i];
            if (a[i] == 0)
            {
                count++;
                maxi = max(maxi, count);
            }
            else
            {
                count = 0;
            }
        }
        cout << maxi << endl;

    }
    return 0;

}