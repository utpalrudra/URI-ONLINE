#include<stdio.h>
int main()
{
    int a, b, c, largest;
    while(scanf("%d %d %d",&a, &b, &c)!=EOF)
    {
        largest =a;
        if(b>largest)
            largest=b;
        else
            largest=a;
        if(c>largest)
            largest=c;
        else
            largest=largest;
            printf("%d eh o maior\n",largest);

    }
    return 0;
}
