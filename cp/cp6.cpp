#include <bits/stdc++.h>
using namespace std;

int main() {
	int n;
	cin>>n;
	int a[n];
	for (int i=0;i<n;i++){
	    int t;
	    cin>>t;
	    a[i]=t;
	}
	int even_wep=0;
	int odd_wep=0;
	for (int i=0;i<n;i++){
	    if((a[i]%2)!=0){
	        odd_wep++;
	    }
	    else{
	    even_wep++;}
	}
	
	
	if (even_wep>odd_wep){
	    cout<<"READY FOR BATTLE";
	}
	else{
	    cout<<"NOT READY";
	}
	
	return 0;
	
}