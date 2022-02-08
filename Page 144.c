#include<stdio.h>
int main()
{
    int i, kount[10];
    int j;
    for(i=0; i<10; i++)
    {
        scanf("%d", &kount[i]);
    }
    for(i=0; i<10; i++)
    {
       // for(j=0; j<10; j++)
        //{
            if(kount[i]==kount[i+1])
                printf("Match found: %d\n", kount[i]);
        //2}
    }
}
