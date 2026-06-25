// https://codeforces.com/contest/2234/problem/A

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
        long long a[110];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }

        for (int i = 0; i < n; i++)
        {
            for (int j = i + 1; j < n; j++)
            {
                if (a[j] > a[i])
                {
                    long long temp = a[i];
                    a[i] = a[j];
                    a[j] = temp;
                }
            }
        }

        bool ok = true;
        for (int i = 0; i < n - 2; i++)
        {
            if (a[i] % a[i + 1] != a[i + 2])
            {
                ok = false;
            }
        }

        if (ok)
            cout << a[0] << " " << a[1] << endl;
        else
            cout << -1 << endl;
    }

    return 0;
}
