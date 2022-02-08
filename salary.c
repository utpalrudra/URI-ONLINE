#include<stdio.h>
int main()
{
    int a, b;
    double c, d;
    while(scanf("%d %d %lf", &a, &b, &c)!=EOF)
    {
        d=c*b;
        printf("NUMBER = %d\n", a);
        printf("SALARY = U$ %0.2lf\n", d);
    }
    return 0;
}
