#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin>>n;

    string t1,t2,s;
    int ct1=0,ct2=0;

    cin>>t1;
    ct1++;

    for (int i = 1; i < n; i++) {
        cin >> s;

        if (s == t1) {
            ct1++;
        } else {
            t2 = s;
            ct2++;
        }
    }

    if (ct1 > ct2)
        cout << t1;
    else
        cout << t2;

    return 0;
}