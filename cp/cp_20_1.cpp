#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        int a[55];

        for (int i = 0; i < n; i++)
            cin >> a[i];

        swap(a[0], a[1]);
        swap(a[0], a[n - 1]);

        if (a[0] == a[1]) {
            cout << "NO\n";
        } else {
            cout << "YES\n";
            for (int i = 0; i < n; i++)
                cout << a[i] << " ";
            cout << "\n";
        }
    }

    return 0;
}