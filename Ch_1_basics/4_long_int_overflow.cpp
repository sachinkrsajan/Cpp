#include <bits/stdc++.h>
using namespace std;

int main(){

    // int , long int , long long int
    // long long int a ---can be written as--- long long a


    // -------------------RANGES-----------------------
    // -10^9  <           int  <      10^9  (int range)
    // -10^12 <      long int  < 10^12 (long int range)
    // -10^18 < long long int  < 10^18 (long long int range)

    int a=100000;
    int b=100000;   
    cout << a*b<<endl ; //overflow due to int range in the 10^9 range 


    int mx=INT_MAX+0;   //  INT_MIN < int < INT_MAX    
    cout<< mx<<"\n";    //  ^                  |
                        //  |        +1        |
                        //  -------------------- 

    // WHEN 1 IS ADDED THE OVERFLOW CAUSUES THE RANGE TO RESET BACK TO INT MIN FROM INT MAX
 


    long long c=a*b; // still wrong ??? because calculation is done in higher datatype and that is int a and int b
    long long int c1=a * 1LL * b; // correct way (1LL 1*long long integer) and 1*any number is the number it self
    cout << c1 << endl; 


    // WHY NOT USE DOUBLE OR FLOAT AS THEY HAVE LONG RANGES??
    // can't store accurately decimal datatypes
    double d1=100000;
    double d2=100000;
    double c2=d1*d2;
    cout<< c2<<endl;                               // output in scientific notation
    cout<< fixed<<setprecision(0)<<c2<< endl;      // fixed keyword used to get normal notation
                                                   // setprecision(0) means no values after decimal
    
    // reason why we dont use double-
    c2=1e24;
    cout<< fixed << c2<<endl; // close to the number but not the number.
}