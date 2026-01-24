// 236A
// not solved

#include <stdio.h>
#include <string.h>
int main()
{
    char st[]="sosonoko";
    int count=0;
    for (int i=0;i<strlen(st);i++){
        int k=1;
        for(int j=0;i<strlen(st);j++){
            if(st[i]==st[i+j+1]){
                k==0;
                i++;
                break;
            }
        }if(k){
        count++;}

    }
    printf("%d",count);
    return 0;

}