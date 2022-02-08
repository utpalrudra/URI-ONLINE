#include<stdio.h>
int main()
{
    double a, r, pi = 3.14159;
    while (scanf("%lf", &r)!=EOF)
    {
        a=pi*r*r;
        printf("A=%.4lf\n", a);
    }
    return 0;
}
