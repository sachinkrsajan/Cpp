// sum of array

#include <bits/stdc++.h>
using namespace std;

//sum (n,a)--->sum of elements in a uptill n index
//sum (n,a) = a[n]+sum(n-1,a)
int sum(int n,int a[]){
    if(n<0) return 0;
    return sum(n-1,a)+a[n];
}   

int main() {
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    cout<<sum(n-1,a);

    return 0;
}

//digit_sum
//digit_sum(n)=digit_sum(n/10)+last_digit
//1234--> 4+digit_sum(123)

#include <bits/stdc++.h>
using namespace std;

int digit_sum(int n){
    if(n==0) return 0;
    return digit_sum(n/10)+n%10;
}

int main() {
    int n;
    cin>>n;
    cout<<digit_sum(n);
    return 0;
}