#include<stdio.h>
int main()
{
    double ara[5]={4.00, 4.50, 5.00, 2.00, 1.50};
    int i, j;
    float d;
    while (scanf("%d %d", &i, &j)!=EOF)
    {
        d=ara[i-1]*j;
        printf("Total: R$ %0.2f\n", d);
    }
    return 0;
}
