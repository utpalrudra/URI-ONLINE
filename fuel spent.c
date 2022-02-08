#include<stdio.h>
int main()
{
    int a, b;
    double d, c;
    while(scanf("%d %d", &a, &b)!=EOF)
    {
        c = (a*b);
        d = (c/12);
        printf("%0.3lf\n", d);
    }
    return 0;
}
