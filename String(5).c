#include<stdio.h>
int main()
{
    char a[100],b[100];
    int i;
    gets(a);

    for(i=0;a[i]!='\0';i++)
    {
       for(i=0;b[i]!='\0';i++)
       {
           b[i]=a[i];
       }
    }
    printf("%c",b[i]);
}
