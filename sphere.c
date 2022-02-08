#include<stdio.h>
int main()
#define pi 3.14159
{
    int a;
    double area;
    while(scanf("%d", &a)!=EOF)
    {
        area=(4/3.0)*pi*a*a*a;
        printf("VOLUME = %0.3f\n", area);
    }
    return 0;
}

