#include<stdio.h>
int main()
{
    float a, b;
    int c;
    while(scanf("%f", &a)!=EOF)
    {
        if(a>=0 && a<=400)
        {N
            b=(a*15)/100;
            a=a+b;
            c=15;
        }
        else if(a>400 && a<=800)
        {
            b=(a*12)/100;N
            a=a+b;
            c=12;
        }
        else if(a>800 && a<=1200)
        {
            b=(a*10)/100;
            a=a+b;
            c=10;
        }
        else if(a>1200 && a<=2000)
        {
            b=(a*7)/100;
            a=a+b;
            c=7;
        }
        else
        {
            b=(a*4)/100;
            a=a+b;
            c=4;
        }
        printf("Novo salario: %.2f\n", a);
        printf("Reajuste ganho: %.2f\n", b);
        printf("Em percentual: %d %%\n", c);
    }
    return 0;
}
