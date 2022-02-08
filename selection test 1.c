#include<stdio.h>
int main()
{
    int a, b, c, d;
    while(scanf("%d %d %d %d", &a, &b, &c, &d)!=EOF)
    {
        if(b>c && d>a && (a+b)<(c+d) && c>0 && d>0 && (a%2==0))
            printf("Valores aceitos\n");
        else
            printf("Valores nao aceitos\n");
    }
    return 0;
}
