#include<stdio.h>
int main()
{
    int i, j, k, l;
    while(scanf("%d %d", &i, &j)!=EOF)
     {
         if(i==0 || j==0)
         break;
         else if(i>0 && j>0)
            printf("primeiro\n");
         else if(i>0 && j<0)
            printf("quarto\n");
         else if(i<0 && j<0)
            printf("terceiro\n");
         else
            printf("segundo\n");

     }
     return 0;

}

