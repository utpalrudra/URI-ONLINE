/*#include <stdio.h>

int main()
{
    char array[100], cipher[100];
    int c=0, x=0, y=0;
    int z;
    printf("This Program will encrypt according to your needs\n");
    printf("Enter the cipher key\n");
    scanf("%d",&z);
    printf("Enter the sentence");
    while((c=getchar()) != '\n')
    {
        array[x++]=(char)c;
        cipher[y++]=(char)(c+z);
    }

    array[x]=0;
    cipher[y]=0;

    printf("%s\n",cipher);

    return 0;
}*/



//Caesar cipher program in C.

#include<stdio.h>
#include<string.h>
void main()
{
    int key,i;
    char data[200];

    printf("\nEnter the alphabetical plain text in lowercase to be encrypted:\n");
    gets(data);  //plain text.

    printf("\nEnter the key value,e.g.:3,4,5,etc. : ");
    scanf("%d",&key);  //key.

    if(key>26)
        key=key % 26; //0<=key<26.

    for(i=0; i<strlen(data); i++)
    {
        if(data[i]==' ')
        {
            continue;
        }
        else
        {
            if(data[i]>= 'x')
            {
                data[i]=data[i]-26;
            }

            data[i]=data[i]+key;
        }
    }
    printf("Your cipher text is: %s\n",data); //cipher text.

}
