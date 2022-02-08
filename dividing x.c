#include<stdio.h>
#include<stdlib.h>
int main()
{
    int T;
    double i, j, l;
    double k;
    scanf("%d", &T);
    for(i=1; i<=T; i++)
    {
        scanf("%lf %lf", &j, &l);
        if(l==0)
            printf("divisao impossivel\n");
        else
        {
            //if(j<0)
                //j=abs(j);
            //else if(l<0)
                //l=abs(l);
            k=j/l;
            if(k==-0.0)
                k=abs(k);
            printf("%.1lf\n", k);
        }

    }
    return 0;

}
