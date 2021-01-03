#include<stdio.h>
int main()
{
    char a[50],b[150],c;
    int i,x,max;
    gets(a);
    for(i=0;i<150;i++)
    {
        b[i]=0;
    }
    for(i=0;a[i]!='\0';i++)
    {
        x=(int)(a[i]);
        b[x]++;
    }
    max=b[0];

    for(i=0;i<150;i++)
    {
        if(max<b[i])
        {
            max=b[i];
            c=(char)(i);
        }
    }
    printf("%c=%d",c,max);
    return 0;
}
