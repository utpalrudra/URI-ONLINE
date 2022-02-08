#include<stdio.h>
int main()
{
    float a, b, c, d, e, f;
    int kount=0;
    while(scanf("%f %f %f %f %f %f", &a, &b, &c, &d, &e, &f )==6)
    {
        if(a>0)
            kount++;
        if(b>0)
            kount++;
        if(c>0)
            kount++;
        if(d>0)
            kount++;
        if(e>0)
            kount++;
        if(f>0)
            kount++;
        printf("%d valores positivos\n", kount);

    }
    return 0;
}
