#include<stdio.h>
int main()
{
    char a[100];
    int i,c=0;

    gets(a);

    for(i=0;a[i]!='\0';i++)
    {
        if(a[i]=='a')
        {
            c++;
        }
    }
    printf("%d\n",c);

    return 0;

}
