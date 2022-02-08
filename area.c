#include<stdio.h>
int main()
#define pi 3.14159
{
    float a, b, c, e, f, g, h, i;
    while(scanf("%f %f %f", &a, &b, &c)!=EOF)
    {
        e=(0.5*a*c);
        f=(pi*c*c);
        g=(0.5*(a+b)*c);
        h=(b*b);
        i=(a*b);
        printf("TRIANGULO: %.3f\nCIRCULO: %.3f\nTRAPEZIO: %.3f\nQUADRADO: %.3f\nRETANGULO: %.3f\n", e, f, g, h, i);
    }
    return 0;
}


