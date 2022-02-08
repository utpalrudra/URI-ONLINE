#include<stdio.h>
int main()
{
    double i, j=1;
    for(i=2; i<=100; i++)
    {
        j=j+(1/i);
    }
    printf("%.2lf\n", j);
    return 0;

}
