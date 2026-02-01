#include <bits/stdc++.h>
using namespace std;

int main(){
    // string str1,str2;
    // getline(cin,str1);
    // getline(cin,str2);
    // cout << str1 <<endl;
    // cout << str2 <<endl;

    int t;
    cin>>t;
    //t++; // to fix the blank line issue
    cin.ignore(); //used after cin and before getline
    while(t--){
        string s;
        getline(cin,s);
        cout << s << endl;
    }

    // WHY 1 LINE IS BLANK?
    // GETLINE TAKES THE DATA FROM CURSOR NEXT POSITION.
    // CIN IGNORES THE \n and TAKES THE DATA


    string str3;
    cin>>str3;
    string str_rev;
    for(int i=str3.size()-1;i>=0;--i){
        //str_rev+=str[i]; //time complexity issue;
        str_rev.push_back(str3[i]); //just like append
    }
    cout<<str_rev<<endl;
    if(str3==str_rev){cout<<"yes";}
    else{cout<<"no";}
}

    