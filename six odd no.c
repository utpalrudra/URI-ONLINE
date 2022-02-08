#include<stdio.h>
int main()
{
    int i, j, kount = 0;
    scanf("%d", &j);
    for(i=j; i<1000;i++)
    {
        if(i%2!=0)
        {
        printf("%d\n", i);
        kount++;
        if(kount>=6)
            break;
        }


    }
    //printf("khgvfckdsj");
}
