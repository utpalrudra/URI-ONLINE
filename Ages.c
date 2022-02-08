#include<stdio.h>
int main()
{
    int i;
    double j, kount=0;
    while(scanf("%d", &i)==1)
    {
        if(i<0)

            break;
        else
        {
            j=j+i;
            kount++;
        }
    }
        printf("%.2lf\n", j/kount);
    return 0;
}
