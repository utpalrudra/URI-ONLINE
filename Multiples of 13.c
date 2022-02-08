#include<stdio.h>
int main()
{
    int i, j, k, l, m;
    while(scanf("%d %d", &i, &j)==2)
    {
        l=0;
        if(i<j)
        {
            for(k=i; k<=j; k++)
            {
                if(k%13!=0)
                    l=l+k;
            }
        }
        else
        {
            for(k=j;k<=i;k++)
            {
                if(k%13!=0)
                    l=l+k;
            }

        }
        printf("%d\n", l);

    }
    return 0;
}
