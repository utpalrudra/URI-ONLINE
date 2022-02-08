#include<stdio.h>
int main()
{
    int ara[5];
    int i, kount=0;
    for(i=0; i<5; i++)
    {
        scanf("%d", &ara[i]);
    }
    for(i=0; i<5; i++)
        {
            if(ara[i]%2==0)
            kount++;
        }
    printf("%d valores pares\n",kount);
    return 0;
}
