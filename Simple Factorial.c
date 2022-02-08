#include<stdio.h>
int main()
{
    int i, j;
    long long fact=1;
    while(scanf("%d", &i)!=EOF)
    {
        fact=1;
        while(i>1)
        {
            fact=fact*i;
            i=i-1;
        }
        printf("%lld\n", fact);
    }
    return 0;
}
