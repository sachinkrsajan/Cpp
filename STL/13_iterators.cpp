#include <bits/stdc++.h>
using namespace std;

int main() {

    vector<int> v={1,2,3,4,5};
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }cout<<endl;
    
    //iterator declaration
    vector<int>::iterator it;
    for(it=v.begin();it!=v.end();it+1){
        cout<<(*it)<<endl;
    }
    vector<pair<int,int>> v_p={{1,2},{2,3},{3,4}};
    vector<pair<int,int>> :: iterator it1;
    for(it1=v_p.begin();it1!=v_p.end();it1++){
        cout<<(*it1).first<<" "<<(*it1).second<<endl;
        cout<<it1->first<<" "<<it1->second<<endl;
    }
    //(*it).first <=> (it->first)
    return 0;
}