#include<stdio.h>
int main()
{
    float a, b, c;
    while (scanf("%f %f", &a, &b)!=EOF)
    {
        c=(((3.5*a)+(7.5*b))/11);
        printf("MEDIA = %.5f\n", c);
    }
    return 0;
}
