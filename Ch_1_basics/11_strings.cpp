#include <bits/stdc++.h>
using namespace std;

int main()
{
    string str = "Hello";
    string str1 = " world";
    // cin >> str1;
    // takes string till new line or any space
    cout << str + str1 << endl;

    if (str == str1){
        cout << "equal" << endl;}
    else{
        cout << "Not equal" << endl;}


    // str[index]
    cout << str[0] << endl;
    str[0]='b';  //only single qoutes
    cout << str << endl;

    // str.size --> to get size of string
    cout << str.size() << endl;
    for(int i=0;i<str.size();i++){
        cout<<str[i]<<endl;
    }

    string str3, str4;
    cin>>str3>>str4;

    //method---1;
    string str5=str3+" "+str4;

    //method--2; GETLINE METHOD
    getline(cin,str3);
    cout <<str3;

}