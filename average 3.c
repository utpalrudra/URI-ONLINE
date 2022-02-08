#include<stdio.h>
int main()
{
    float a, b,c, d, e, f, g;
    while (scanf("%f %f %f %f %f",&a, &b, &c, &d, &e)!=EOF)
    {
        f=((a*2)+(b*3)+(c*4)+d)/10;
        printf("Media: %.1f\n", f);
        if(f>=7.0)
            printf("Aluno aprovado.\n");
        else if(f<5.0)
            printf("Aluno reprovado.\n");
        else
            printf("Aluno em exame.\n");
        printf("Nota do exame: %.1f\n", e);
        g=(f+e)/2;
        if(g>=5.0)
            printf("Aluno aprovado.\n");
        else if(g<5.0)
            printf("Aluno aprovado.\n");
        printf("Media final: %.1f\n", g);

    }
    return 0;
}
