#include<stdio.h>
int main()
{
    int i, j, k, l, m;
    scanf("%d %d", &i, &j);
    printf("Novo grenal (1-sim 2-nao)\n");
    while(scanf("%d", &k)==1)
    {
        if(k==1)
        {
            scanf("%d %d", &l, &m);
            printf("Novo grenal (1-sim 2-nao)\n");
        }
        else if(k==2)
            break;

    }




}
