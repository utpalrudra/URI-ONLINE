#include<stdio.h>
int main()
{
    int i, j, k, l, m=0, n, o, p, T, temp;
    scanf("%d", &T);
    for(i=1; i<=T; i++)
    {
        scanf("%d %d", &j, &k);
    if(j>k)
    {
        temp=k;
        k=j;
        j=temp;

    }
    //printf("%d %d\n", j, k);
    //}
    if(j==k || (j+1)==k)
            printf("0\n");
    else
        {
            m=0;
        for(l=j+1; l<k; l++)
        {
            //m=0;
            if(l%2!=0)
                    m=m+l;
        }
        printf("%d\n", m);
        }
    }
    return 0;

}
