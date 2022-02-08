
#include<stdio.h>
int main()
{
    int i, j, k, l, m=0, t;
    scanf("%d", &t);
    for(i=1; i<=t; i++)
    {
        scanf("%d %d", &j, &k);
        int kount=0;
        if(k<0)
            printf("0\n");
        else
        {
            while(l=j)
            {
                if(l%2==1 || l%2==(-1))
                {
                    m=m+l;
                    kount++;
                printf("%d\t", m);
                }
                if(kount==k)
                    break;
                j++;
            }
            printf("%d\n", m);
            m=0;
        }
    }
}
