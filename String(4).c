#include<stdio.h>
int main()
{
    char a[100];
    int i,length=0;
    gets(a);

    for(i=0;a[i]!='\0';i++)
    {
        length++;
    }
    for(i=length-1;i>=0;i--)
    {
        printf("%c",a[i]);
    }
}
