#include<stdio.h>
char a[50];

int main()
{
    char a[50],b,c;
    int i,x=0,l=0;

    gets(a);

    scanf("%c%",&b);

    scanf("%c",&c);
    for(i=0; a[i]!='\0'; i++)
    {
        if(a[i]==b)
        {
            a[i]=c;
        }
    }
    for(i=0; a[i]!='\0'; i++)
    {
        printf("%c",a[i]);
    }


    return 0;
}




