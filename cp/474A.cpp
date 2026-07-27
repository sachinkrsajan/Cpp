#include <bits/stdc++.h>
using namespace std;

int main() {

    char lr;
    string ip;
    string qr="qwertyuiopasdfghjkl;zxcvbnm,./";
    cin>>lr>>ip;
    if(lr=='L'){
        for(int i=0;i<ip.size();i++){
            for(int j=0;j<qr.size();j++){
                if(ip[i]==qr[j]){
                    cout<<qr[j+1];
                }
            }
        }
        cout<<endl;
    }
    else{
        for(int i=0;i<ip.size();i++){
            for(int j=0;j<qr.size();j++){
                if(ip[i]==qr[j]){
                    cout<<qr[j-1];
                }
            }
        }
        cout<<endl;
    }

    return 0;
}