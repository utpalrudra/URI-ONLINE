#include<stdio.h>
int main()
{
    int i, j=0, k=1, l, kount=2;
    scanf("%d", &i);
    printf("%d", j);
    //kount++;
    if(i==1)
        break;
    else
    {
        printf(" %d", k);
        //kount++;
        if(i==2)
            break;
    }
    while(kount<=i)
    {
        l=j+k;
        printf("%d", l);
        j=k;
        k=l;
        kount++;
        if(kount<i)
        {
            printf(" ");
        }
    }
    return 0;
}
