#include<stdio.h>
int main()
{
    int i, j, k, l=0, kount=0;
    while(scanf("%d %d", &i, &j)==2)
    {
        if(j<=0)
            scanf("%d", &j);
            //l=0;
        for(k=i; k<=10000000; k++)
        {
            l=l+k;
            kount++;
            if(kount==j)
                break;
        }
        printf("%d\n", l);
        l=0;
        kount=0;
    }
    return 0;
}
