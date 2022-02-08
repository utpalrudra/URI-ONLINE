#include<stdio.h>
int main()
{
    int i, j=0, k=0, l=0, m;
    while(scanf("%d", &i)==1)
    {
        if(i==1)
            j++;
        else if(i==2)
            k++;
        else if(i==3)
            m++;
        else if(i==4)
            break;
    }
    printf("MUITO OBRIGADO\nAlcool: %d\nGasolina: %d\nDiesel: %d\n", j, k, l);
    return 0;
}
