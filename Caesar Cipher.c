#include <stdio.h>
#include <string.h>
int main()
{
    int i, j, k, len, test, kase;
    char str[55];
    scanf("%d", &test);
    while(test!=0)
    {
        scanf("%s", str);
        scanf("%d", &kase);
        for(i=0; i<strlen(str); i++)
        {
            if((str[i]-kase)<65)
                printf("%c", str[i]-kase+26);
            else
                printf("%c", str[i]-kase);

        }

        printf("\n");
        test--;
    }
    return 0;
}

