#include<stdio.h>
int main()
{
    double a, b, c, temp;
    while(scanf("%lf %lf %lf", &a, &b, &c)!=EOF)
        {
            {
            if(a<b)
                {
                temp=a;
                a=b;
                b=temp;
                }
            if(a<c)
                {
                temp=a;
                a=c;
                c=temp;
                }
            }
            if(a>=b+c)
                printf("NAO FORMA TRIANGULO\n");
            else
            {
                if(a*a==b*b+c*c)
                    printf("TRIANGULO RETANGULO\n");
                if(a*a>b*b+c*c)
                    printf("TRIANGULO OBTUSANGULO\n");
                if(a*a<b*b+c*c)
                    printf("TRIANGULO ACUTANGULO\n");
                if(a==b && a==c && c==b)
                    printf("TRIANGULO EQUILATERO\n");
                if((a==b && b!=c) || (a==c && b!=c) || (b==c && b!=a))
                    printf("TRIANGULO ISOSCELES\n");
            }
        }
    return 0;
}
