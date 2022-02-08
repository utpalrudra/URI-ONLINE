#include<stdio.h>
int main()
{
    int i, j;
    for(i=1,j=7; i<=2, j>=5; i=i+0,j--)
    {
        printf("I=%d J=%d\n", i=i+0, j);
        //i=i+0;
    }
    for(i=3,j=7; i<=2, j>=5; i=i+0,j--)
    {
        printf("I=%d J=%d\n", i, j);
    }
    for(i=5,j=7; i<=2, j>=5; i=i+0,j--)
    {
        printf("I=%d J=%d\n", i, j);
    }
    for(i=7,j=7; i<=2, j>=5; i=i+0,j--)
    {
        printf("I=%d J=%d\n", i, j);
    }
    for(i=9,j=7; i<=2, j>=5; i=i+0,j--)
    {
        printf("I=%d J=%d\n", i, j);
    }
    return 0;

}
