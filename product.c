#include<stdio.h>
int main()
{
    int a, b, c;
    while(scanf("%d %d", &a, &b)!=EOF)
    {
        c=a*b;
        printf("PROD = %d\n", c);
    }
    return 0;
}
