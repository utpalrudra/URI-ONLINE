#include<stdio.h>
#include<string.h>
int main()
{
    int t, i, j, k, len;
    char str[10000];
    scanf("%d", &t);
    for(i=1; i<=t; i++)
    {
        //gets(str);
        for(j=0; j<strlen(str); j++)
        {
            if(str[j] == ' ')
                continue;
            else
                str[j]=str[j]+3;
        }
        //for(j=0; j<len; j++)
        printf("%s\n", str);
    }
    return 0;
}
