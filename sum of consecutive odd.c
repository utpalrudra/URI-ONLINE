#include<stdio.h>
int main()
{
    int a, b, i, sum=0;
    scanf("%d %d", &a, &b);
    if((a>0 && b>0)|| (a<0 && b>0))
        {
            for(i=a;i<b;i++)
            {
                if(i%2!=0)
                    sum=sum+i;
            }
        }
    else if(a>0 && b<0)
        {
            for(i=a;i>b;i--)
            {
                if(i%2!=0)
                    sum=sum+i;
            }
        }
                    printf("%d\n", sum);

    return 0;
}

