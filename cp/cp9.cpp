#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int arr[4];
	    for (int i=0 ;i<4;i++){
	        int x;
	        cin>>x;
	        arr[i]=x;
	    }
	    int a=arr[0];
	    int b=arr[1];
	    int c=arr[2];
	    int d=arr[3];
	    if (((b+c+d)<a)||((a+c+d)<b)||((a+b+d)<c)||((a+b+c)<d)){
	        cout<<"YES"<<endl;
	    }
	    else{
	        cout<<"NO"<<endl;
	    }
	}
}
