
#include<stdio.h>
int main()
{
    int i;
    long long j;
    while(scanf("%d", &i)==1)
    {
        for(j=1; j<=i; j++)
        {
            printf("%lld %lld %lld\n", j, j*j, j*j*j);

        }
    }
    return 0;
}
