#include<stdio.h>
int main()
{
    double i, j, k=1, l;
    for(i=3,j=2 ; i<40; i=i+2, j=j*2)
    {
        k=k+(i/j);
    }
    printf("%.2lf\n", k);
    return 0;

}
