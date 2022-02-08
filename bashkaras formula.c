#include<stdio.h>
#include<math.h>
int main()
{
    double a, b, c, d, e, f, g;
    while(scanf("%lf %lf %lf", &a, &b, &c)!=EOF)
    {
        d=(b*b-4*a*c);
        if(a==0 || d<0)
            printf("Impossivel calcular\n");
        else
        {
            f=(-b+sqrt(d))/(2*a);
            g=(-b-sqrt(d))/(2*a);
            printf("R1 = %0.5lf\n",f);
            printf("R2 = %0.5lf\n",g);
        }
    }
    return 0;
}
