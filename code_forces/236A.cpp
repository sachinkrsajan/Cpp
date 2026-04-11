// https://codeforces.com/problemset/problem/236/A

#include <bits/stdc++.h>
using namespace std;

int main() {

    string s;
    cin>>s;
    int arr[26]={0};
    int ct=0;
    int lent=s.length();
    for(int i=0;i<lent;i++){
        arr[(s[i]-97)]=1;
    }
    for(int i=0;i<26;i++){
        if(arr[i]==1){
            ct++;
        }
    }
    if(ct%2==0){
        cout<<"CHAT WITH HER!"<<endl;
    }
    else{
        cout<<"IGNORE HIM!"<<endl;
    }

    return 0;
}