#include <bits/stdc++.h>
using namespace std;

int main(){
    cout << 7/2.0 << "\n"; // the output is of higher data type
    cout << 3/2<< "\n";
    

    // ---------------------TOP TO BOTTOM PRECIDENCY--------------------------

    //   postfix          () [] -> . ++ --                      (left to right)
    //   unary            + - ! ~ ++ -- (type)* & sizeof        (right to left)
    //   multiplicative   * / %                                 (left to right)
    //   additive         + -                                   (left to right)
    //   shift            << >>                                 (left to right)
    //   relational       < <= > >=                             (left to right)
    //   equality         == !=                                 (left to right)
    //   bitwise AND      &                                     (left to right)
    //   bitwise XOR      ^                                     (left to right)
    //   bitwise OR       |                                     (left to right)
    //   Logical AND      &&                                    (left to right)
    //   Logical OR       ||                                    (left to right)
    //   conditional      ?:                                    (right to left)
    //   assignment       = += .= *= /= %= >>= <<= &= ^= |=     (right to left)
    //   comma            ,                                     (left to right)

    cout << 7/2*3 <<"\n";
    cout << 7*2/3 <<"\n";
}