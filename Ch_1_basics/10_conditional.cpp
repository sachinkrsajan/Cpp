#include <bits/stdc++.h>
using namespace std;
int x; // global variable
int main(){

    int a=2;
    int b=3;
    cout<< (a==b)<< endl;
    // && || (relational)

    int n;
    cin>>n;
    if(n%2==0){
        int x=2;
        cout<< "yes"<<endl;
    }
    else if(n%3==0){
        cout<<"Divisible by 3!"<<endl;
    }
    else{
        cout<<"no"<<endl;
    }

    // cout<<x; (OUT OF SCOPE AS  X IS DEFINED UNDER IF CONDITION)
    // { UNDER CURLY BRACKET SCOPE IS DEFINED }

    int i=1;
    while (i<=10){
        cout<<i<<endl;
        i++;
    }

    for(int i=1;i<=10;cout << i++<< endl){ //i++ and ++i is same inside for loop
    }
     

    
    //break; // breaks the loop : last for loop ke bahar jayega
    //continue; // reverts the command line to last loop : last for loop ke bahar jayega
    for(int j=0; j<10; j++){
        for (int i = 0; i < 10; i++) // last for loop for break
        {
            if (i==8){
                if(true){
                    break;
                }
                // break; 
                continue;
            }
            cout<< i;
        }
        cout<<endl;
    }



}