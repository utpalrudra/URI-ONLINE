#include<stdio.h>
int main()
{
    int a, b, c, d, e, f;
    while(scanf("%d %d %d", &a, &b, &c)!=EOF)
    {
        if(a<b && a<c)
            {
                d=a;
                if(b<c)
                    {
                    e=b;
                    f=c;
                    }
                else
                    {
                    e=c;
                    f=b;
                    }
            }

        else if(b<a && b<c)
        {
            d=b;
            if(a<c)
                {
                e=a;
                f=c;
            }
            else
                {
                e=c;
                f=a;
            }
        }

        else if(c<a && c<b)
        {
            d=c;
            if(a<b)
                {
            e=a;
            f=b;
            }
            else
                {
                e=b;
                f=a;
                }
        }
    printf("%d\n%d\n%d\n", d, e, f);
    printf("\n%d\n%d\n%d\n", a, b, c);
    }
    return 0;
}
