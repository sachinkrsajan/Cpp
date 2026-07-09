#include <bits/stdc++.h>
using namespace std;

int main() {

    int a,b,c;
    cin>>a>>b>>c;
    int max_sum=a*b*c;
    if(a>b &&a>c&&a*(b+c)>max_sum){
        max_sum=a*(b+c);
    }
    else if(b>a&&b>c&&b*(c+a)>max_sum){
        max_sum=b*(a+c);
    }
    else if(c>a&&c>b&&c*(b+a)>max_sum){
        max_sum=c*(a+b);
    }
    else{
        if(a+b+c>max_sum){
            max_sum=a+b+c;
        }
    }
    cout<<max_sum<<endl;

    return 0;
}