#include <bits/stdc++.h>
using namespace std;

const int n1=1e7; // const keyword so the value does not change
int a[n1];

int main(){

    // ----------Size of Array----------------

    // in local array declaration (main ya function ke andar)
    // to array ka order hai 10^5

    // global array size 10^7

    /*
    int n=1e7;
    int a[n];
    a[n-1]=7;
    cout<< a[n-1]; //segmenatation fault
    */

    /*  if the array is defined globally then
        segmentation error does not happen

    */ 
    
    a[n1-1]=7;
    cout<< a[n1-1]; // correct way


}