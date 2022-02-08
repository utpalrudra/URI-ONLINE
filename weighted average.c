#include<stdio.h>
int main()
{
    double i, j, k, t, l, m;
    scanf("%lf", &t);
    for(i=1; i<=t; i++)
    {
        scanf("%lf %lf %lf", &j, &k, &l);
        l=((j*2)+(k*3)+(l*5))/10;
        printf("%.1lf\n", l);
    }
    return 0;
}

