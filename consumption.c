#include<stdio.h>
int main()
{
    int a;
    float b, c;
    while (scanf("%d %f", &a, &b)!=EOF)
    {
        c=(a/b);
        printf("%.3f km/l\n", c);
    }
    return 0;
}
