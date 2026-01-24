// id-671A

#include<stdio.h>
int main() {
    int x;
    scanf("%d",&x);
    
    int s=x/5;
    if(x%5!=0 ){
        s++;
    }
    printf("%d\n",s);
    return 0;
}