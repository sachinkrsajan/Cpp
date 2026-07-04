#include <bits/stdc++.h>
using namespace std;

int main() {

    string s;
    cin >> s;
    bool space = true;
    for (int i = 0; i < s.length(); ) {
        if (i + 2 < s.length() && s[i] == 'W' && s[i + 1] == 'U' && s[i + 2] == 'B') {
            if (!space) {
                cout << " ";
                space = true;
            }
            i += 3;
        }
        else {
            cout << s[i];
            space = false;
            i++;
        }
    }

    return 0;
}