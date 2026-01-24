// 71A

#include <stdio.h>
#include <string.h>
int main()
{
    int n;
    scanf("%d", &n);
    while (n--)
    {
        char st[100];
        scanf("%s",st);
        // int len = sizeof(st) / sizeof(st[0]);
        int len = strlen(st);
        if (len <= 10)
        {
            printf("%s\n", st);
        }
        else
        {
            printf("%c%d%c\n", st[0], len - 2, st[len-1]);
        }
    }
    return 0;
}

