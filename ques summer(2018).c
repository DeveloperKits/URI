#include<stdio.h>
int main()
{
    int a,b,i,c,d;
    scanf("%d%d",&a,&b);
    c=0;
    d=0;
    for(i=a;i<=b;i++)
    {
        if(i%2==0)
        {
            c=c+i;
            printf("%d",i);
            printf("+");
        }



    }

    printf("=%d\n",c);
}
