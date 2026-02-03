#include <bits/stdc++.h>
using namespace std;

void printHello(){
    cout << "hello world!"<< endl;
}

int sum(int a,int b){
    int result= a+b;
    return result;
}

int digit_sum(int n){
    int digit_sum=0;
    while(n){
        digit_sum = digit_sum + n % 10;
        n=n/10;
    }
    return digit_sum;
}

int main(){
    printHello();
    cout<<sum(2,3)<<endl;

    int a=1064,b=4765;
    // cin>>a>>b;
    cout<<digit_sum(a)+digit_sum(b)<<endl;

}