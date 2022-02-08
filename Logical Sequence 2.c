#include<stdio.h>
int main()
{
    int i, j, k, l, kount=0;
    while(scanf("%d %d", &i, &j)==2)
    {
        kount=0;
        for(k=1; k<=j; k++)
        {
            printf("%d ", k);
            kount++;
            while(kount==i)
            {
                printf("\n");
                kount=0;
            }
        }
    }
    return 0;
}
