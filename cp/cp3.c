// 231A

#include <stdio.h>
int main(){
    int t;
    int count=0;
    scanf("%d",&t);
    for(int i=0;i<t;i++){
        int a=0;
        int b=0;
        int c=0;
        scanf("%d%d%d",&a,&b,&c);
        if ((a==1 && b==1) || (a==1 && c==1) || (b==1 && c==1)){
            count++;
        }
    }
    printf("%d",count);
    return 0;
}