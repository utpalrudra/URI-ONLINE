#include<stdio.h>
#include<math.h>
int main()
{
    int x1, x2, y1, y2, g, h, i;
    float  e;
    while(scanf("%d %d %d %d", &x1, &y1, &x2, &y2)!=EOF)
    {
        g=(x2-x1);
        h=(y2-y1);
        i=(g*g+h*h);
        e=sqrt(i);
        printf("%0.4f\n", e);
    }
    return 0;
}
