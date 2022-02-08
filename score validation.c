#include<stdio.h>
int main()
{
    double i, j, l=0, m, ara[5];
    int k, kount=0;
    while(scanf("%lf", &i)!=EOF)
    {
        if(i<0 || i>10)
            printf("nota invalida\n");
        else
        {
                    l=l+i;
                    kount++;
                    if(kount==2)
                {
                    m=l/2;
                    printf("media = %.2lf\n", m);
                    break;
                }
        }
    }
    return 0;
}
