#include <bits/stdc++.h>
using namespace std; 

void printvec(vector<int> v){
    cout<<"size:"<<v.size();
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;
}
void printvec1(vector<string> v){
    cout<<"size:"<<v.size();
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;
}
int main() {
 
    vector<int> v;
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        printvec(v);
        v.push_back(x); // O(1)
    }
    printvec(v);

    vector<int> v1(5,3); // 5 elements = {3,3,3,3,3}
    v1.push_back(7);
    printvec(v1);
    v1.pop_back();
    printvec(v1);

    vector<int>v2=v1; // O(N) copying the vector v1 (expensive operation)
    v2.push_back(5);
    printvec(v1);
    printvec(v2);
    
    vector<string> s;
    for(int i=0;i<n;i++){
        string sk;
        cin>>sk;
        s.push_back(sk);
    }
    printvec1(s);

    return 0;
}