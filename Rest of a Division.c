#include<stdio.h>
int main()
{
    int i, j, k, l,temp;
    while(scanf("%d %d", &i, &j)==2)
    {
        if(i>j)
        {
            temp=j;
            j=i;
            i=temp;
        }
        for(k=i+1; k<j; k++)
        {
            if(k%5==2 || k%5==3)
                printf("%d\n", k);
        }

    }
    return 0;
}
