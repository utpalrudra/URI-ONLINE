#include<stdio.h>
int main()
{
    double a, c, e, g, i, k, m,w, o,q,s,u;
    int b,d,f,h,j,l,n,p,r,t,v,x;
    while(scanf("%lf", &a)!=EOF)
    {
        printf("NOTAS:\n");
        b=a/100;
        printf("%d nota(s) de R$ 100.00\n", b);
        c=a-(100*b);
        d=c/50;
        printf("%d nota(s) de R$ 50.00\n", d);
        e=c-(d*50);
        f=e/20;
        printf("%d nota(s) de R$ 20.00\n", f);
        g=e-(f*20);
        h=g/10;
        printf("%d nota(s) de R$ 10.00\n", h);
        i=g-(h*10);
        j=i/5;
        printf("%d nota(s) de R$ 5.00\n", j);
        k=i-(j*5);
        l=k/2;
        printf("%d nota(s) de R$ 2.00\n", l);
        printf("MOEDAS:\n");
        m=k-(l*2);
        n=m/1;
        printf("%d moeda(s) de R$ 1.00\n", n);
        o=m-(n*1);
        p=o/0.50;
        printf("%d moeda(s) de R$ 0.50\n", p);
        q=o-(p*0.50);
        r=q/0.25;
        printf("%d moeda(s) de R$ 0.25\n", r);
        s=q-(r*0.25);
        t=s/0.10;
        printf("%d moeda(s) de R$ 0.10\n", t);
        u=s-(t*0.10);
        v=u/0.05;
        printf("%d moeda(s) de R$ 0.05\n", v);
        w=u-(v*0.05);
        x=w/0.01;
        printf("%d moeda(s) de R$ 0.01\n", x);
        }
        return 0;
}

