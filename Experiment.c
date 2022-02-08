#include<stdio.h>
int main()
{
    double i, t, j=0, k, l=0, m=0, n=0;
    char ch;
    scanf("%lf", &t);
    for(i=0; i<t; i++)
    {
        scanf("%lf %c", &k, &ch);
            j=j+k;
        if(ch=='C')
            l=l+k;
        else if(ch=='R')
            m=m+k;
        else if(ch=='S')
            n=n+k;
    }
    printf("Total: %.0lf cobaias\n", j);
    printf("Total de coelhos: %.0lf\n", l);
    printf("Total de ratos: %.0lf\n", m);
    printf("Total de sapos: %.0lf\n", n);
    printf("Percentual de coelhos: %.2lf %%\n", (100*l)/j);
    printf("Percentual de ratos: %.2lf %%\n", (100*m)/j);
    printf("Percentual de sapos: %.2lf %%\n", (100*n)/j);
    return 0;

}
