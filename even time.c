#include<stdio.h>
int main()
{
    int x1, x2, h1, h2, m1, m2, s1, s2, a, b, c, d, m, s, h;
    while(scanf("%d %d %d %d %d %d %d %d", &x1, &h1, &m1, &s1, &x2, &h2, &m2, &s2)!=EOF)
    {
        a=((x2-x1)*86400+(h2-h1)*3600+(m2-m1)*60+(s2-s1));
        //printf("%d\n", a);
        d=(a/86400);
        //b=(a-(d*86400));
        h=((a%d)/3600);
        //c=(b-(h*3600));
        m=((((a%d)/3600)%h)/60);
        s=((((a%d)/3600)%h)/60)%m;
        printf("%d dia(s)\n%d hora(s)\n%d minuto(s)\n%d segundo(s)\n", d, h, m, s);
    }
    return 0;
}
