#include<stdio.h>
int main()
{
    int a, b, c;
    while(scanf("%d %d", &a, &b)!=EOF)
    {
        c=(24+b)-a;
        printf("O JOGO DUROU %d HORA(S)\n", c);
    }
    return 0;
}
