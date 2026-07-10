#include <bits/stdc++.h>
using namespace std;

int main() {

    pair<int,string> p;
    p=make_pair(2,"abc");
    pair<int,string>p1=p; //makes a copy (&p1 makes reference linking the two as 1)
    cout<<p.first<<" "<<p.second<<endl;
    int a[]={1,2,3};
    int b[]={2,3,4};
    pair<int,int> p_array[3];
    p_array[0]={1,2};
    p_array[1]={2,3};
    p_array[2]={3,4};
    for(int i=0;i<3;i++){
        cout<<p_array[i].first<<" "<<p_array[i].second<<endl;
    }

    pair<int,string> p3;
    cin>>p3.first;
    cout<<p3.first;
    return 0;
}