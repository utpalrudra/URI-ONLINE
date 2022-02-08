#include<stdio.h>
int main()
{
    float a, b, c, d, e, f, i, j;
    int kount=0;
    while(scanf("%f %f %f %f %f %f", &a, &b, &c, &d, &e, &f )==6)
    {
        if(a>0)
            {
            kount++;
            i=a;
            }
        if(b>0)
        {
            kount++;
            i=i+b;
        }
        if(c>0)
            {
            kount++;
            i=i+c;
            }
        if(d>0)
            {
            kount++;
            i=i+d;
            }
        if(e>0)
            {
            kount++;
            i=i+e;
            }
        if(f>0)
        {
            kount++;
            i=i+f;
        }
        j=(i/kount);
        //printf("%f", i);
        printf("%d valores positivos\n", kount);
        printf("%.1f\n",j);

    }
    return 0;
}
