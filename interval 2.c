#include<stdio.h>
int ara[10000001];
int main()
{
    int i, j, kount=0, kount2=0;
    scanf("%d", &i);
    for(j=0; j<i; j++)
        {
            scanf("%d", &ara[j]);
        }
    for(j=0; j<i; j++)
        {
            if(ara[j]>=10 && ara[j]<=20)
                kount++;
        }
    printf("%d in\n", kount);
    kount2=i-kount;
    printf("%d out\n", kount2);
    return 0;
}
