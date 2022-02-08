#include<stdio.h>
int main()
{

    int a, b, c, d, e, f;
    while(scanf("%d %d %d %d", &a, &b, &c, &d)!=EOF)
    {
    if(c<a && d<b)
        {
            e=(c+23)-a;
            f=(d+60)-b;
        }
    else if(c<a && d>b)
        {
            e=(c+24)-a;
            f=d-b;
        }
    else if(c>a && d<b)
        {
            e=(c-1)-a;
            f=(d+60)-b;
        }
    else
        {
            e=c-a;
            f=d-b;
        }
    printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n", e, f);
    }
    return 0;
}

