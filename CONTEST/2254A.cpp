#include <bits/stdc++.h>
using namespace std;

int main() {

    int t;
    cin>>t;
    while(t--){
        int a,b,c;
        cin>>a>>b>>c;
        if(a==b || b==c || c==a){
            cout<<0<<endl;
        }
        else{
            int ct=0;
            while(a!=b && b!=c && c!=a){
                if(a>b&&a>c){
                    if(b>c){
                        a--;
                        c++;
                        ct++;
                    }
                    else{
                        a--;
                        b++;
                        ct++;
                    }
                }
                else if(b>c&&b>a){
                    if(c>a){
                        b--;
                        a++;
                        ct++;
                    }
                    else{
                        b--;
                        c++;
                        ct++;
                    }
                }
                else{
                    if(a>b){
                        c--;
                        b++;
                        ct++;
                    }
                    else{
                        c--;
                        a++;
                        ct++;
                    }
                }
            }
            cout<<ct<<endl;
        }
    }
    

    return 0;
}