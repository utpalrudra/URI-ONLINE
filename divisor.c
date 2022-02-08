#include<stdio.h>
int main()
{
    int i, j, k, l;
    while(scanf("%d", &i)==1)
    {
        for(j=1; j<=i; j++)
        {
            if(i%j==0)
                printf("%d\n", j);
        }
    }
    return 0;
}
