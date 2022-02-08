#include<stdio.h>
int main()
{
    int i, j, k;
    while(scanf("%d %d", &i, &j)!=EOF)
    {
        if(i==j)
            break;
        else if(i>j)
            printf("Decrescente\n");
        else
            printf("Crescente\n");
    }
    return 0;
}
