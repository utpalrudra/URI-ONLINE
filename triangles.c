#include<stdio.h>
int main()
{
    float a, b, c, d, e;
    while (scanf("%f %f %f", &a, &b, &c)!=EOF)
    {
        d=a+b+c;
        e=0.5*(a+b)*c;
        if((a+b)>c && (b+c)>a && (c+a)>b)
            printf("Perimetro = %.1f\n", d);
        else
            printf("Area = %.1f\n", e);
    }
    return 0;
}
