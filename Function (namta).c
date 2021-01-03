#include<stdio.h>
int namta(int num);
int main()
{
    int x,i,n;
    scanf("%d",&x);
    for(i=1; i<=x; i++)
    {
        n=namta(x);
        printf("%d",n);
    }
    return 0;
}
int namta(int num)
{
    int i,r;
    for(i=1; i<=10; i++)
    {
        r=num*i;
        return r;
    }
}
