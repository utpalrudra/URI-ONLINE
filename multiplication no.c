#include<stdio.h>
int main()
{
    int i, j, k;
    scanf("%d", &i);
    for(j=1; j<11; j++)
    {
        printf("%d x %d = %d\n", j, i,j*i);
    }
    return 0;
}
