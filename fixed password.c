#include<stdio.h>
int main()
{
    int i;
    while(scanf("%d", &i)!=EOF)
    {
        if(i==2002)
            {
            printf("Acesso Permitido\n");
            break;
            }
        else
            printf("Senha Invalida\n");

    }
    return 0;
}
