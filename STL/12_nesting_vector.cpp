#include <bits/stdc++.h>
using namespace std;
void printvec(vector<pair<int,int>> v){
    cout<<"size:"<<v.size();
    for(int i=0;i<v.size();i++){
        cout<<v[i].first<<" "<<v[i].second<<endl;
    }
}
int main() {

    //direct initialisation;
    vector<pair<int,int>>v={{1,2},{2,3},{4,5}};
    printvec(v);

    //taking input;
    vector<pair<int,int>> v1;
    printvec(v1);
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        int x,y;
        cin>>x>>y;
        v.push_back({x,y}); // v.push_back(make_pair(x,y)); 
    }
    printvec(v1);

    return 0;
}