#include<stdio.h>
int main()
{
    int i, j, k=0, l, m, kount=0;
    while(scanf("%d", &i)==1)
    {
        k=0;
        kount=0;
        if(i==0)
            break;
        else
        {
            while(j=i)
            {
                if(j%2==0)
                {
                    k=k+j;
                    kount++;
                }
                if(kount==5)
                    break;
                j++;
            }
        }
    }
        printf("%d\n", k);
    return 0;
}
