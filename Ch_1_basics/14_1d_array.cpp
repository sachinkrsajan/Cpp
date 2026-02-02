#include <bits/stdtr1c++.h>
using namespace std;

int main(){


    int a[10]={1,2,3,4,5,6,7,8,9,10};
    a[11]=10;
    cout << a[11]<<endl; // very random behaviour (undefiend)
    cout<<a[0]<<endl;


    int n;
    cout<<"number of elements:";
    cin>>n;
    int b[n];
    for(int i=0;i<n;i++){
        cin >> b[i];
    }
    int sum=0;
    for(int i=0;i<n;++i){
        sum=sum+b[i];
    }
    cout<<"sum:"<<sum;

    //char c[n]; usually avoided in c++

    

}