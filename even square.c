#include<stdio.h>
#include<math.h>
int main()
{
    double i, j, k;
    scanf("%lf", &i);
    for(j=2; j<=i; j=j+2)
    {
        k=pow(j,2);
        printf("%.0lf^2 = %.0lf\n", j, k);
    }
    return 0;
}
