#include<stdio.h>
int main()
{
    int a, b, c, d, e;
    while(scanf("%d", &a)!=EOF)
    {
        b=a/365;
        printf("%d ano(s)\n", b);
        c=a-(b*365);
        d=c/30;
        printf("%d mes(es)\n", d);
        e=c-(d*30);
        printf("%d dia(s)\n", e);
        }
        return 0;
}

