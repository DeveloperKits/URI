#include<stdio.h>
int main()
{
    int term,i;
    scanf("%d",&term);
    int a[term];
    a[0]=0;
    a[1]=1;
    printf("%d %d ",a[0],a[1]);

    for(i=2;i<term;i++)
    {
        a[i]=a[i-2]+a[i-1];
        printf("%d ",a[i]);
    }

    return 0;
}
