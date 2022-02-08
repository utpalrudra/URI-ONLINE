#include<stdio.h>
int main()
{
    float a, b, c, d;
    while (scanf("%f %f %f", &a, &b, &c)!=EOF)
    {
        d=(((2*a)+(3*b)+(5*c))/10);
        printf("MEDIA = %.1f\n", d);
    }
    return 0;
}
