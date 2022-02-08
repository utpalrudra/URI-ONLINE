#include<stdio.h>
int main()
{
    double i, l=0, m, a, b, c;
    int k, j, kount=0;
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
                printf("media = %.2lf\nnovo calculo (1-sim 2-nao)\n", m);
                kount=0;
                m=0;
                l=0;
                break;
            }
        }
    }
    while(scanf("%d", &j)==1)
    {
        if(j<1 || j>2)
            printf("novo calculo (1-sim 2-nao)\n");
        else if(j==1)
        {
            scanf("%lf", &i);
            if (i<0 || i>10)
                printf("nota invalida\n");
            else
            {
                l=l+i;
                kount++;
                if(kount==2)
                {
                    m=l/2;
                    printf("media = %.2lf\nnovo calculo (1-sim 2-nao)\n", m);
                    kount=0;
                    m=0;
                    l=0;
                    break;
                }
            }
        }
        else if(j==2)
            break;
    }
    return 0;
}

