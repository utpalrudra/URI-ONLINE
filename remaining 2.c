#include<stdio.h>
int main()
{
    int i, j, k, l;
    scanf("%d", &i);
    printf("2\n");
    for(j=1; j<=10000; j++)
    {
        if(j%i==0)
            printf("%d\n", j+2);
    }
    return 0;
}
