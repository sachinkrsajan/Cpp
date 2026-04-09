/*
https://www.geeksforgeeks.org/problems/max-sum-subarray-of-size-k5313/1
Given an array of integers arr[]  and a number k. Return the maximum sum of a subarray of size k.

Note: A subarray is a contiguous part of any given array.

Examples:

Input: arr[] = [100, 200, 300, 400], k = 2
Output: 700
Explanation: arr2 + arr3 = 700, which is maximum 

Constraints:
1 ≤ arr.size() ≤ 10^6
0 ≤ arr[i] ≤ 10^6
1 ≤ k ≤ arr.size()

*/

#include<bits/stdc++.h>
using namespace std;
const int N=1e6+10;

int main(){

    int a,k;
    cin>>a>>k;

    int hsh[N];
    int arr[a];
    for(int i=0;i<a;i++){
        cin>>arr[i];
        hsh[arr[i]]++;
    }
    
    int sum=0;
    while(--a){
        if((hsh[arr[a]]==1)&&(k!=0)){
            sum=sum+arr[a];
            k--;
        }
    }
    cout<<sum<<endl;
    return 0;
}