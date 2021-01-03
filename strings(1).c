#include<stdio.h>
int main()
{
    char a[10];
    int i,length=0;
    gets(a);

    for(i=0;a[i]!='\0';i++)
    {
        length++;
    }
    printf("\n");
    printf("%d",length);

    return 0;
}
