#include <bits/stdc++.h>
using namespace std;


int increment(int &n, int n1){
    n++;
    n1++;
}

void swap(int &a,int &b){
    int temp=a;
    a=b;
    b=temp;
}

int main(){

    int a=3,b=9;
    cout<< a<<" "<<b<< endl;
    increment(a,b);
    cout<<a<<" "<<b<<endl; //value of b doesnt not change as only a copy is sent


    int n1=4,n2=8;
    cout<< n1 << " " << n2 << endl;
    swap(n1,n2); // also an inbuilt function
    cout<< n1 << " " << n2 << endl;

    
}