
#include<stdio.h>
int main()
{
    int ara[101], i, place;
    for(i=0; i<=9; i++)
    {
        scanf("%d", &ara[i]);
    }
    for(i=1; i<=9; i++)
    {
        if(ara[0]<ara[i])
            ara[0]=ara[i];
    }
            printf("%d\n", ara[0]);

    for(i=1; i<=9; i++)
            {
                if(ara[0]==ara[i])
                place=i+1;
            }
            printf("%d\n", place);
}
