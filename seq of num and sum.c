#include<stdio.h>
int main()
{
    int i, j, k, l, m, temp, sum=0;
    while(scanf("%d %d", &i, &j)!=EOF)
    {
        if(i==0 || j==0)
            break;
    else if(i>j)
        {
//puts("Im here 11");
            sum=0;
//printf("%d %d \n\n",i,j);

            for(k=j; k<=i; k++)
                {
                    printf("%d ",k);
                    sum=sum+k;
                }
        }
        else
            {
                temp=j;
                j=i;
                i= temp;
                sum=0;
                for(k=j; k<=i; k++)
                {
                    printf("%d ",k);
                    sum=sum+k;
                }
            }
            printf("Sum=%d\n",sum);
    }
    return 0;
}
