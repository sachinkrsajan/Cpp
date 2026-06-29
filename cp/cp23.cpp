#include <bits/stdc++.h>
using namespace std;

int main() {

    int n;
    int x=0;
    cin>>n;
    while(n--){
        int pi,qi;
        cin>>pi>>qi;
        if(qi-pi>=2){
            x++;
        }
    }
    cout<<x<<endl;

    return 0;
}