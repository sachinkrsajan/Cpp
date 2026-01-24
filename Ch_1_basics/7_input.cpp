#include <bits/stdc++.h>
using namespace std;

int main(){
    int a;
    double b;
    char c; // storing 0-9 give ascii values

    cin >> a >> b >> c;  // it looks for space and new line for next data entry
    //for instance if i take 9 values by using space it will take the first 4 values
    
    /*incase of char it only takes 1 character so if we write 2 values 
    together after 1 char the other part will be stored in next variable */  


    cout << a << " " << b << " " << c << " " << (int)c << "\n";
    cout << a << "\n"; // endl=\n
}