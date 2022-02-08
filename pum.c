#include<stdio.h>
int main()
{
    int i, j, k;
    while(scanf("%d", &i)==1)
    {
        for(j=1; j<=(i*4); j=j+4)
        {
            printf("%d %d %d PUM\n", j, j+1, j+2);
        }
    }
    return 0;
}
