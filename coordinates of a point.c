#include<stdio.h>
int main()
{
    float a, b;
    while(scanf("%f %f", &a, &b)!=EOF)
    {
        if(a>0 && b>0)
            printf("Q1\n");
        else if(a<0 && b>0)
            printf("Q2\n");
        else if(a<0 && b<0)
            printf("Q3\n");
        else if(a>0 && b<0)
            printf("Q4\n");
        else if(a==0 && b==0)
            printf("Origem\n");
        else if(a!=0 && b==0)
            printf("Eixo X\n");
        else if(a==0 && b!=0)
            printf("Eixo Y\n");
        }
        return 0;
}
