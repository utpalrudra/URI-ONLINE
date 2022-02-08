#include<stdio.h>
int main()
{
    int ara[6], i, j=0, k=0, l=0, m=0;
    for(i=0; i<5; i++)
    {
        scanf("%d", &ara[i]);
    }
    for(i=0; i<5; i++)
    {
        if(ara[i]%2==0)
            j++;
    }
    printf("%d valor(es) par(es)\n", j);
    for(i=0; i<5; i++)
    {
        if(ara[i]%2!=0)
            k++;
    }
    printf("%d valor(es) impar(es)\n", k);
    for(i=0; i<5; i++)
    {
        if(ara[i]>0)
            l++;
    }
    printf("%d valor(es) positivo(s)\n", l);
    for(i=0; i<5; i++)
    {
        if(ara[i]<0)
            m++;
    }
    printf("%d valor(es) negativo(s)\n", m);
    return 0;
}

