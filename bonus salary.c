#include<stdio.h>
int main()
{
    double a, b, c, i;
    char s[50];
    while(scanf("%s %lf %lf",s, &a, &b)!=EOF)
        {
        c=a+((b*15)/100);
        printf("TOTAL = R$ %0.2lf\n", c);
    }
    return 0;
}

