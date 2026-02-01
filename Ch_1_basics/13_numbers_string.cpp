#include<bits/stdc++.h>
using namespace std;

int main(){
    //ASCII (0-9)--> (48-57)
    // USED TO TAKE BIG NUMBERS
    string s;
    cin>>s;
    cout<<(int)s[s.size()-1]<<endl; // ascii value output
    int last_digit=s[s.size()-1]-'0';
    cout<<last_digit;
    return 0;
}   