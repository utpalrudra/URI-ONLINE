#include<stdio.h>
int main()
{
    int i, j, k;
    while(scanf("%d", &i)==1)
    {
        if(i==0)
            break;
        else
        {
            for(j=1; j<=i; j++)
            {
                printf("%d :", j);
            }
            printf("\n");
        }
    }
    return 0;
}
